#include <stdio.h>
#include <stdlib.h>

#include "disk_schedule.h"

int main() {
    int numRequests;
    Request* requests;

    int head, start, end;
    enum Algorithm algorithm;
    enum Direction direction;

    printf("Enter number of requests: ");
    scanf("%d", &numRequests);

    requests = (Request*)malloc(numRequests * sizeof(Request));

    printf("Enter requests: ");
    for (int i = 0; i < numRequests; i++) {
        int position;
        scanf("%d", &position);
        requests[i].position = position;
        requests[i].id = i + 1;
    }

    printf("Enter head position: ");
    scanf("%d", &head);

    printf("Enter start and end positions of disk: ");
    scanf("%d %d", &start, &end);

    printf("Enter algorithm (1: SSTF, 2: SCAN, 3: C-LOOK): ");
    scanf("%d", &algorithm);

    if (algorithm == SCAN || algorithm == C_LOOK) {
        printf("Enter direction (1: LEFT, 2: RIGHT): ");
        scanf("%d", &direction);
    } else {
        direction = NONE;
    }

    printf("\n");

    diskSchedule(requests, numRequests, head, start, end, algorithm, direction);

    free(requests);

    return 0;
}