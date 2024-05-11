package LogFileMinMaxPackage;

import java.io.IOException;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.util.GenericOptionsParser;

public class LogFileMinMax {
	public static void main(String[] args) throws Exception {
		Configuration conf = new Configuration();
		String[] files = new GenericOptionsParser(conf, args).getRemainingArgs();

		Path input = new Path(files[0]);
		Path output = new Path(files[1]);

		Job job = new Job(conf, "logfile-minmax");

		job.setJarByClass(LogFileMinMax.class);
		job.setMapperClass(MapperLFMinMax.class);
		job.setReducerClass(ReducerLFMinMax.class);

		job.setOutputKeyClass(Text.class);
		job.setOutputValueClass(IntWritable.class);

		FileInputFormat.addInputPath(job, input);
		FileOutputFormat.setOutputPath(job, output);

		System.exit(job.waitForCompletion(true) ? 0 : 1);
	}

	public static class MapperLFMinMax extends Mapper<LongWritable, Text, Text, IntWritable> {
		@Override
		protected void map(LongWritable key, Text value,
				Mapper<LongWritable, Text, Text, IntWritable>.Context context)
				throws IOException, InterruptedException {
			String lines = value.toString();
			String[] records = lines.split("\n");

			for (String record : records) {
				String[] values = record.split(",");
				context.write(new Text(values[2]), new IntWritable(Integer.parseInt(values[4])));
			}
		}
	}

	public static class ReducerLFMinMax extends Reducer<Text, IntWritable, Text, IntWritable> {
		private String minIp = "";
		private int minSum = Integer.MAX_VALUE;

		private String maxIp = "";
		private int maxSum = Integer.MIN_VALUE;

		@Override
		protected void reduce(Text key, Iterable<IntWritable> values,
				Reducer<Text, IntWritable, Text, IntWritable>.Context context)
				throws IOException, InterruptedException {
			int sum = 0;

			for (IntWritable value : values) {
				sum += value.get();
			}

			if (sum > maxSum) {
				maxIp = key.toString();
				maxSum = sum;
			}

			if (sum < minSum) {
				minIp = key.toString();
				minSum = sum;
			}
		}

		@Override
		protected void cleanup(
				Reducer<Text, IntWritable, Text, IntWritable>.Context context)
				throws IOException, InterruptedException {
			context.write(new Text("Min Sum IP: " + minIp), new IntWritable(minSum));
			context.write(new Text("Max Sum IP: " + maxIp), new IntWritable(maxSum));
		}
	}
}
