#ifndef BANKERS_H
#define BANKERS_H

#include <stdio.h>
#include <stdlib.h>

#include "process.h"

static int* _availableResources;  // Available resources for each resource type
static int _numberOfProcesses;    // Number of processes
static int _numberOfResources;    // Number of resource types
static Process* _processes;       // Array of processes

// Initialize the needed resources for each process and the isFinished flag
static void _init() {
    for (int i = 0; i < _numberOfProcesses; i++) {
        // Allocate memory for the needed resources
        _processes[i].neededResources =
            (int*)malloc(_numberOfResources * sizeof(int));

        // Calculate the needed resources for each process
        for (int j = 0; j < _numberOfResources; j++) {
            _processes[i].neededResources[j] =
                _processes[i].maxResources[j] -
                _processes[i].allocatedResources[j];
        }

        // Initialize the isFinished flag
        _processes[i].isFinished = 0;
    }
}

// Print the processes information in a table
// PID, Allocated resources, Max resources, Needed resources
static void _printProcessesInfo() {
    printf("Processes information:\n");
    printf("PID \t| Allocated \t| Maximum \t| Needed \n");
    for (int index = 0; index < _numberOfProcesses; index++) {
        printf("P%d \t| ", _processes[index].pid);

        // Print the allocated resources
        for (int i = 0; i < _numberOfResources; i++) {
            printf("%d ", _processes[index].allocatedResources[i]);
        }

        printf("\t| ");

        // Print the max resources
        for (int i = 0; i < _numberOfResources; i++) {
            printf("%d ", _processes[index].maxResources[i]);
        }

        printf("\t| ");

        // Print the needed resources
        for (int i = 0; i < _numberOfResources; i++) {
            printf("%d ", _processes[index].neededResources[i]);
        }

        printf("\n");
    }

    printf("\n");
}

// Check if the process can be allocated
static int _canAllocate(int processIndex) {
    // Check if the process is already finished
    if (_processes[processIndex].isFinished) {
        return 0;
    }

    // Check if the process can be allocated
    for (int i = 0; i < _numberOfResources; i++) {
        if (_processes[processIndex].neededResources[i] >
            _availableResources[i]) {
            return 0;
        }
    }

    return 1;
}

// Allocate the resources for the process
static void _allocate(int processIndex) {
    // Allocate the resources
    for (int i = 0; i < _numberOfResources; i++) {
        _availableResources[i] +=
            _processes[processIndex].allocatedResources[i];
    }

    // Set the isFinished flag
    _processes[processIndex].isFinished = 1;
}

// Banker's algorithm utility function
static void _bankersAlgorithm() {
    int index = 0;

    printf("Safe sequence: ");

    while (index < _numberOfProcesses) {
        // Check if the process can be allocated
        if (_canAllocate(index)) {
            _allocate(index);  // Allocate the resources
            printf("P%d ", _processes[index].pid);
            index = 0;
        } else {
            index++;
        }
    }

    printf("\n\n");
}

// Check if the system is in a safe state
static int _isSafe() {
    for (int i = 0; i < _numberOfProcesses; i++) {
        if (!_processes[i].isFinished) {  // Check if the process is finished
            return 0;
        }
    }

    return 1;
}

// Print the available resources
static void _printAvailableResources() {
    printf("Available resources: ");
    for (int i = 0; i < _numberOfResources; i++) {
        printf("%d ", _availableResources[i]);
    }
    printf("\n");
}

// Print the pending processes
static void _printPendingProcesses() {
    printf("Pending processes: ");
    for (int i = 0; i < _numberOfProcesses; i++) {
        if (!_processes[i].isFinished) {
            printf("P%d ", _processes[i].pid);
        }
    }
    printf("\n");
}

// Banker's algorithm
void bankersAlgorithm(Process* processes, int numberOfProcesses,
                      int numberOfResources, int* availableResources) {
    _processes = processes;
    _numberOfProcesses = numberOfProcesses;
    _numberOfResources = numberOfResources;
    _availableResources = availableResources;

    _init();  // Initialize the needed resources and the isFinished
    _printProcessesInfo();  // Print the processes information
    _bankersAlgorithm();    // Run the algorithm

    if (_isSafe()) {  // Check if the system is in a safe state
        printf("The system is in a safe state.\n");
        _printAvailableResources();
    } else {
        printf("The system is not in a safe state.\n");
        _printPendingProcesses();
    }

    printf("\n");

    // Free the allocated memory
    for (int i = 0; i < _numberOfProcesses; i++) {
        free(_processes[i].neededResources);
    }
    free(_processes);
}

#endif  // BANKERS_H