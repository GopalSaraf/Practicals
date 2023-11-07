# Program Execution Instructions

This program consists of three files: `writer.c` and `reader.c`. Follow these steps to compile and run the program:

## Compilation

1. **Compile `writer.c`**:

   - Open a terminal and navigate to the directory containing the program files.
   - Run the following command to compile `writer.c`:

   ```shell
   gcc writer.c -o writer
   ```

This command will generate an executable file named `writer`.

2. **Compile `reader.c`**:

   - Run the following command to compile `reader.c`:

   ```shell
   gcc reader.c -o reader
   ```

   This command will generate an executable file named `reader`.

## Execution

3. **Run `writer`**:

   - Execute the `writer` program by running:

   ```shell
   ./writer
   ```

   This program will prompt you to enter a message. Type your message and press Enter. The message will be written to the shared memory.

4. **Run `reader`**:

   - Execute the `reader` program by running:

   ```shell
   ./reader
   ```

   This program will read the message from shared memory and display it on the screen.

## Example Output

After running the `writer` and `reader` programs, you should see output similar to the following:

```
# Running writer
Enter a message: This message is sent from writer using shared memory.
Message written to shared memory: This message is sent from writer using shared memory.

# Running reader
Message read from shared memory: This message is sent from writer using shared memory.
```

## Cleanup (Optional)

5. If you want to delete the shared memory segment after you're done with the example, you can use the `ipcrm` command. To delete the shared memory segment created by the `writer` or `reader` program, use the following command:

   ```shell
   ipcrm -M <shmid>
   ```

   Replace `<shmid>` with the actual shared memory segment ID. You can find the segment ID in the output of the `ipcs` command.

That's it! You have successfully demonstrated shared memory communication between the `writer` and `reader` programs.

Feel free to experiment with different messages and explore how shared memory works in this example.
