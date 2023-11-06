# Execution Instructions

These instructions will guide you through compiling and running two C programs: `main.c` and `display_reverse.c`. Ensure that both files are located in the same directory.

## Prerequisites

Before running the programs, you should have a C compiler, such as GCC (GNU Compiler Collection), installed on your system.

## Compilation

### Compile `display_reverse.c`

To compile `display_reverse.c`, open your terminal and run the following command:

```bash
gcc display_reverse.c -o display_reverse
```

This will create an executable file named `display_reverse` in the same directory.

### Compile `main.c`

To compile `main.c`, open your terminal and run the following command:

```bash
gcc main.c -o main
```

This will create an executable file named `main` in the same directory.

## Execution

### Run `main`

Now, you can execute `main` to sort an array and pass it to `display_reverse`. Run the following command in your terminal:

```bash
./main
```

Follow the on-screen prompts to enter the number of integers and the integer values to be sorted. After sorting, the sorted array will be passed to `display_reverse`, which will display it in reverse order.

## Note

- Make sure to compile `display_reverse.c` before running `main`, as `main` depends on the `display_reverse` executable.

- If you encounter any errors during compilation or execution, ensure that you have GCC installed and that the source code files (`main.c` and `display_reverse.c`) are in the same directory as the README.
