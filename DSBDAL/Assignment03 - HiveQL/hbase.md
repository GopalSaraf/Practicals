# HBase Table

1. Create a table named 'flights' with the following columns:
   - flight_number
   - flight_date
   - flight_time
   - origin
   - destination
   - distance
   - delay

```
$ hbase shell

hbase> create 'flights', 'flight_number', 'flight_date', 'flight_time', 'origin', 'destination', 'distance', 'delay'
```

2. Insert data into the table through the HBase shell:

```
hbase> put 'flights', '1', 'flight_number', 'AA123'
hbase> put 'flights', '1', 'flight_date', '2024-01-01'
hbase> put 'flights', '1', 'flight_time', '10:00'
hbase> put 'flights', '1', 'origin', 'JFK'
hbase> put 'flights', '1', 'destination', 'LAX'
hbase> put 'flights', '1', 'distance', '2475'
hbase> put 'flights', '1', 'delay', '10'
```

3. Insert data into the table through file:

- Create a file named `flights.csv` with the following content:

```
2,AI234,2024-01-02,11:00,AUS,BOS,1750,5
3,DL345,2024-01-03,12:00,DFW,LGA,1389,0
4,UA456,2024-01-04,13:00,SFO,ORD,1846,15
5,WN567,2024-01-05,14:00,LAX,ATL,1947,20
6,AA678,2024-01-06,15:00,ORD,DFW,802,0
7,UA789,2024-01-07,16:00,LGA,ORD,733,0
8,DL890,2024-01-08,17:00,ATL,LAX,1947,30
9,WN901,2024-01-09,18:00,BOS,JFK,187,0
10,AA012,2024-01-10,19:00,ORD,LGA,733,0
```

- Load the file into hadoop file system:

```
$ hadoop fs -put flights.csv
```

- Load the file into HBase table:

```
$ hbase org.apache.hadoop.hbase.mapreduce.ImportTsv -Dimporttsv.separator=',' -Dimporttsv.columns=HBASE_ROW_KEY,flight_number,flight_date,flight_time,origin,destination,distance,delay flights flights.csv
```

4. Scan the table to verify the data:

```
hbase> scan 'flights'
```
