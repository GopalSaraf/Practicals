# Hive external table

1. Create an external table named 'flights' with the following columns:
   - flight_number
   - flight_date
   - flight_time
   - origin
   - destination
   - distance
   - delay

```sql
CREATE EXTERNAL TABLE flights (
  flight_number STRING,
  flight_date STRING,
  flight_time STRING,
  origin STRING,
  destination STRING,
  distance INT,
  delay INT
)
STORED BY 'org.apache.hadoop.hive.hbase.HBaseStorageHandler'
WITH SERDEPROPERTIES (
  "hbase.columns.mapping" = ":key,flight_number,flight_date,flight_time,origin,destination,distance,delay"
)
TBLPROPERTIES (
  "hbase.table.name" = "flights"
);
```

2. Display the data from the table:

```sql
SELECT * FROM flights;
```

It should display the data that was inserted into the HBase table.

3. Create index on the table:

```sql
CREATE INDEX flights_origin_idx
ON TABLE flights (origin)
AS 'org.apache.hadoop.hive.ql.index.compact.CompactIndexHandler'
WITH DEFERRED REBUILD;
```

4. Verify the index:

```sql
SHOW INDEXES ON flights;
```

5. Calculate the average delay for each origin:

```sql
SELECT origin, AVG(delay) AS avg_delay
FROM flights
GROUP BY origin;
```
