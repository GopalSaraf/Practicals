#include <stdio.h>
#include <stdlib.h>

#include "page_replacement.h"

int main() {
    int numPageRequests, frameSize;
    enum Algorithm algorithm;

    int* pageRequests;

    printf("Enter the number of page requests: ");
    scanf("%d", &numPageRequests);

    printf("Enter the frame size: ");
    scanf("%d", &frameSize);

    printf("Enter the algorithm (1: FIFO, 2: LRU, 3: OPTIMAL): ");
    scanf("%d", &algorithm);

    pageRequests = (int*)malloc(numPageRequests * sizeof(int));

    printf("Enter the page requests: ");
    for (int i = 0; i < numPageRequests; i++) {
        scanf("%d", &pageRequests[i]);
    }

    pageReplacement(pageRequests, numPageRequests, frameSize, algorithm);

    free(pageRequests);
    return 0;
}