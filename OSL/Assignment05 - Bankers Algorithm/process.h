#ifndef PROCESS_H
#define PROCESS_H

typedef struct Process {
    int pid;
    int* allocatedResources;
    int* maxResources;
    int* neededResources;

    int isFinished;
} Process;

#endif  // PROCESS_H