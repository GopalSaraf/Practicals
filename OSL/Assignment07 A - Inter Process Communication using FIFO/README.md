# Program Execution Instructions

This program consists of three files: `setup.c`, `main1.c`, and `main2.c`. Follow these steps to compile and run the program:

## Compilation

1. **Compile `setup.c`**:

   - Open a terminal and navigate to the directory containing the program files.
   - Run the following command to compile `setup.c`:

   ```shell
   gcc setup.c -o setup
   ```

   This command will generate an executable file named `setup`.

2. **Compile `main1.c`**:

   - Run the following command to compile `main1.c`:

   ```shell
   gcc main1.c -o main1
   ```

   This command will generate an executable file named `main1`.

3. **Compile `main2.c`**:

   - Run the following command to compile `main2.c`:

   ```shell
   gcc main2.c -o main2
   ```

   This command will generate an executable file named `main2`.

## Execution

4. **Run `setup`**:

   - Execute the `setup` program by running:

   ```shell
   ./setup
   ```

   This will create the necessary files and named pipes based on your specifications.

5. **Run `main1`**:

   - Execute the `main1` program by running:

   ```shell
   ./main1
   ```

   This will perform the operations associated with `main1`.

6. **Run `main2`**:

   - Execute the `main2` program by running:

   ```shell
   ./main2
   ```

   This will perform the operations associated with `main2`.

## Cleanup (Optional)

7. If you want to clean up the generated files and named pipes, you can simply delete them using the `rm` command.

   ```shell
   rm fifo1 fifo2 file.txt
   ```

Please note that you should run the programs in the order specified (setup, main1, main2), and make sure you are in the correct directory where the program files are located before compiling and running them.

That's it! You should now be able to compile and run the program successfully.
