#include <stdio.h>
#include <fcntl.h>

#include "const.h"

int main() {
    // Create fifos
    if (mkfifo(FIFO_1, FIFO_MODE) == -1) {
        perror("mkfifo");
        return 1;  // Error
    }
    if (mkfifo(FIFO_2, FIFO_MODE) == -1) {
        perror("mkfifo");
        return 1;  // Error
    }

    printf("%s and %s created successfully.\n", FIFO_1, FIFO_2);

    return 0;
}