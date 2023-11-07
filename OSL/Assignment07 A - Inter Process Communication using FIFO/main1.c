#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#include "./const.h"

int main() {
    int file1, file2;
    char str1[MAX_BUF], str2[MAX_BUF];

    printf("Enter a string: ");
    fgets(str1, MAX_BUF, stdin);  // Take input string from user

    file1 = open(FIFO_1, O_WRONLY);  // Open FIFO_1 for writing
    if (file1 == -1) {
        perror("open");
        return 1;  // Error
    }

    write(file1, str1, strlen(str1) + 1);  // Write string to FIFO_1
    close(file1);                          // Close FIFO_1

    file2 = open(FIFO_2, O_RDONLY);  // Open FIFO_2 for reading
    if (file2 == -1) {
        perror("open");
        return 1;  // Error
    }

    read(file2, str2, MAX_BUF);  // Read string from FIFO_2
    close(file2);                // Close FIFO_2
    printf("\nReceived string: \n%s", str2);

    return 0;
}