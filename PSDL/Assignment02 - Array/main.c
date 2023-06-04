#include <xc.h>

void main() {
    int array[100];  // Declare an integer array with 100 elements

    // Fill the array with values from 1 to 100
    for (int i = 0; i < 100; i++) {
        array[i] = i + 1;
    }

    int sum = 0;  // Initialize a variable to hold the sum

    // Calculate the sum of all elements in the array
    for (int i = 0; i < 100; i++) {
        sum += array[i];
    }

    while (1)
        ;  // Infinite loop to keep the program running

    return;
}
