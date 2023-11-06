#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pipe_fd[2];  // Pipe file descriptors
    if (pipe(pipe_fd) == -1) {
        perror("Pipe creation failed");
        exit(1);
    }

    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("Fork failed");
        exit(1);
    }

    if (child_pid == 0) {   // Child process
        close(pipe_fd[1]);  // Close the write end of the pipe in the child
        int sorted_arr[n];

        printf("Reading sorted array from pipe...\n");
        // Read the sorted array from the pipe
        read(pipe_fd[0], sorted_arr, sizeof(sorted_arr));
        close(pipe_fd[0]);  // Close the read end of the pipe in the child
        printf("Got sorted array from parent process. \n\n");

        // Now, execute the program to display the array in reverse order
        char *child_args[n + 2];

        // Create command line arguments for the display_reverse program
        child_args[0] = "./display_reverse";  // Program name

        for (int i = 0; i < n; i++) {
            char arg[10];
            sprintf(arg, "%d", sorted_arr[i]);  // Convert integer to string
            child_args[i + 1] = strdup(arg);  // Copy the string to the argument
        }

        child_args[n + 1] = NULL;  // Null-terminate the argument list

        execve("./display_reverse", child_args, NULL);

        perror("Execve failed");  // If execve fails
        exit(1);
    } else {                // Parent process
        close(pipe_fd[0]);  // Close the read end of the pipe in the parent
        bubbleSort(arr, n);

        printf("\nSorted array in parent process: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");

        printf("Writing sorted array to pipe...\n");
        // Write the sorted array to the pipe
        write(pipe_fd[1], arr, sizeof(arr));

        printf("Wrote sorted array to pipe.\n\n");

        close(pipe_fd[1]);  // Close the write end of the pipe
        wait(NULL);
        printf("\n");
        printf("Child process terminated.\n");
        printf("Parent process terminated.\n");
    }

    return 0;
}
