#ifndef PROCESS_H
#define PROCESS_H

typedef struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int waitingTime;
    int turnAroundTime;
} Process;

#endif  // PROCESS_H