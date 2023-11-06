#include <stdio.h>
#include <stdlib.h>

#include "./process.h"
#include "./bankers.h"

int main() {
    int noOfProcesses, noOfResources;

    printf("Enter the number of processes: ");
    scanf("%d", &noOfProcesses);

    printf("Enter the number of resources: ");
    scanf("%d", &noOfResources);
    printf("\n");

    int *available = (int *)malloc(noOfResources * sizeof(int));
    Process *processes = (Process *)malloc(noOfProcesses * sizeof(Process));

    printf("Enter space separated values for available resources\n");
    printf("Enter the available resources: ");
    for (int i = 0; i < noOfResources; i++) {
        scanf("%d", &available[i]);
    }
    printf("\n");

    for (int i = 0; i < noOfProcesses; i++) {
        int *allocated = (int *)malloc(noOfResources * sizeof(int));
        int *max = (int *)malloc(noOfResources * sizeof(int));

        printf("Enter the allocated resources for process %d: ", i + 1);
        for (int j = 0; j < noOfResources; j++) {
            scanf("%d", &allocated[j]);
        }

        printf("Enter the maximum resources for process %d: ", i + 1);
        for (int j = 0; j < noOfResources; j++) {
            scanf("%d", &max[j]);
        }
        printf("\n");

        processes[i].pid = i + 1;
        processes[i].allocatedResources = allocated;
        processes[i].maxResources = max;
    }

    bankersAlgorithm(processes, noOfProcesses, noOfResources, available);

    return 0;
}