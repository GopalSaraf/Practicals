#include <stdio.h>

#include "./process.h"
#include "./rr.h"
#include "./sjf.h"

#define MAX_PROCESSES 100

Process processes[MAX_PROCESSES];

int main() {
    int noOfProcesses, timeQuantum, choice;

    printf("Enter the number of processes: ");
    scanf("%d", &noOfProcesses);

    for (int i = 0; i < noOfProcesses; i++) {
        printf("Enter the arrival time and burst time of process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrivalTime, &processes[i].burstTime);
        processes[i].pid = i + 1;
    }
    printf("\n");

    printf("Which algorithm do you want to use?\n");
    printf("1. Round Robin\n");
    printf("2. Shortest Job First\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice) {
        case 1:
            printf("Enter the time quantum: ");
            scanf("%d", &timeQuantum);
            printf("\n");
            scheduleRoundRobin(processes, noOfProcesses, timeQuantum);
            return 0;
        case 2:
            scheduleSJF(processes, noOfProcesses);
            return 0;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    return 0;
}