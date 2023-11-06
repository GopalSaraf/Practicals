#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = argc - 1;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = atoi(argv[i + 1]);
    }

    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
