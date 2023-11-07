#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#include "const.h"

int main() {
    int file1, file2;
    char str1[MAX_BUF], str2[MAX_BUF];
    FILE *file;

    // Open FIFO_1 for reading
    file1 = open(FIFO_1, O_RDONLY);
    if (file1 == -1) {
        perror("open");
        return 1;  // Error
    }

    read(file1, str1, MAX_BUF);  // Read string from FIFO_1
    close(file1);                // Close FIFO_1

    printf("Received string: \n%s\n", str1);

    int chars = 0;
    int words = 0;
    int lines = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        chars++;
        if (str1[i] == ' ' || str1[i] == '\n') {
            words++;
        }
        if (str1[i] == '\n' || str1[i] == '.') {
            lines++;
        }
    }

    printf("Number of characters: %d\n", chars);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    file = fopen(TXT_FILE, "w");  // Open txt file for writing
    if (file == NULL) {
        perror("fopen");
        return 1;  // Error
    }

    fprintf(file, "Number of characters: %d\n", chars);
    fprintf(file, "Number of words: %d\n", words);
    fprintf(file, "Number of lines: %d\n", lines);

    fclose(file);  // Close txt file

    file = fopen(TXT_FILE, "r");  // Open txt file for reading
    if (file == NULL) {
        perror("fopen");
        return 1;  // Error
    }

    int i = 0;
    int c = fgetc(file);
    while (c != EOF) {
        str2[i] = c;
        c = fgetc(file);
        i++;
    }
    str2[i] = '\0';

    fclose(file);  // Close txt file

    // Open FIFO_2 for writing
    file2 = open(FIFO_2, O_WRONLY);
    if (file2 == -1) {
        perror("open");
        return 1;  // Error
    }

    write(file2, str2, strlen(str2) + 1);  // Write string to FIFO_2
    close(file2);                          // Close FIFO_2

    return 0;
}