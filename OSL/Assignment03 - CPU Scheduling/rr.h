#ifndef RR_H
#define RR_H

#include <stdio.h>
#include "./process.h"

#define MAX_PROCESSES 100

static Process _processes[MAX_PROCESSES];

static int _noOfProcesses;
static int _timeQuantum;

static int _noOfRemainingProcesses;

static int _totalWaitingTime;
static int _totalTurnAroundTime;

static int _currentTime;
static int _currentProcessIndex;

// Initialize processes and variables
static void _initRR(Process* processes) {
    // Copy processes
    for (int i = 0; i < _noOfProcesses; i++) {
        _processes[i] = processes[i];
        _processes[i].waitingTime = 0;
        _processes[i].turnAroundTime = 0;
        _processes[i].remainingTime = _processes[i].burstTime;
    }

    _totalWaitingTime = 0;     // Reset total waiting time
    _totalTurnAroundTime = 0;  // Reset total turn around time
    _noOfRemainingProcesses =
        _noOfProcesses;        // Reset no of remaining processes
    _currentProcessIndex = 0;  // Reset current process index

    // Set current time to minimum arrival time
    _currentTime = _processes[0].arrivalTime;

    for (int i = 0; i < _noOfProcesses; i++) {
        if (_processes[i].arrivalTime < _currentTime) {
            _currentTime = _processes[i].arrivalTime;
        }
    }
}

// Print processes details (arrival time and burst time)
static void _printProcessesRR() {
    printf("Processes: \n");
    printf("PID\tAT\tBT\n");
    for (int i = 0; i < _noOfProcesses; i++) {
        printf("P%d\t%d\t%d\n", _processes[i].pid, _processes[i].arrivalTime,
               _processes[i].burstTime);
    }
    printf("\n");
}

// Print processes details
// (arrival time, burst time, waiting time and turn around time)
// and total waiting time and total turn around time
static void _printProcessesDetailsRR() {
    printf("Processes: \n");
    printf("PID\tAT\tBT\tWT\tTAT\n");
    for (int i = 0; i < _noOfProcesses; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n", _processes[i].pid,
               _processes[i].arrivalTime, _processes[i].burstTime,
               _processes[i].waitingTime, _processes[i].turnAroundTime);
    }
    printf("\n");
    printf("Total Waiting Time: %d\n", _totalWaitingTime);
    printf("Total Turn Around Time: %d\n", _totalTurnAroundTime);
    printf("\n");
    printf("Average Waiting Time: %.2f\n",
           (float)_totalWaitingTime / _noOfProcesses);
    printf("Average Turn Around Time: %.2f\n",
           (float)_totalTurnAroundTime / _noOfProcesses);

    printf("\n");
}

// Print Gantt Chart
static void _printGanttChartRR(int withPid) {
    if (withPid) {
        printf("P%d (%d) | ", _processes[_currentProcessIndex].pid,
               _currentTime);
    } else {
        printf("IDLE (%d) | ", _currentTime);
    }
}

// Check if current process is arrived
static int _isProcessArrivedRR() {
    return _processes[_currentProcessIndex].arrivalTime <= _currentTime;
}

// Check if current process is finished
static int _isProcessFinishedRR() {
    return _processes[_currentProcessIndex].remainingTime == 0;
}

// Check if current process is required more time than time quantum
static int _isProcessRequiredMoreTimeRR() {
    return _processes[_currentProcessIndex].remainingTime > _timeQuantum;
}

// Set waiting time and update total waiting time
static void _setWaitingTimeRR() {
    _processes[_currentProcessIndex].waitingTime =
        _currentTime - _processes[_currentProcessIndex].burstTime -
        _processes[_currentProcessIndex].arrivalTime;

    _totalWaitingTime += _processes[_currentProcessIndex].waitingTime;
}

// Set turn around time and update total turn around time
static void _setTurnAroundTimeRR() {
    _processes[_currentProcessIndex].turnAroundTime =
        _currentTime - _processes[_currentProcessIndex].arrivalTime;

    _totalTurnAroundTime += _processes[_currentProcessIndex].turnAroundTime;
}

// Schedule processes using Round Robin algorithm
static void _scheduleProcessRR() {
    printf("Gantt Chart: ");
    _printGanttChartRR(0);

    while (_noOfRemainingProcesses) {
        // Check if current process is arrived and not finished
        if (_isProcessArrivedRR() && !_isProcessFinishedRR()) {
            if (_isProcessRequiredMoreTimeRR()) {  // Process required more time
                // Update current time and remaining time
                _currentTime += _timeQuantum;
                _processes[_currentProcessIndex].remainingTime -= _timeQuantum;
            } else {
                // Update current time and remaining time
                _currentTime += _processes[_currentProcessIndex].remainingTime;
                _processes[_currentProcessIndex].remainingTime = 0;

                // Set waiting and turn around time
                _setWaitingTimeRR();
                _setTurnAroundTimeRR();

                _noOfRemainingProcesses--;
            }
            _printGanttChartRR(1);
        }

        _currentProcessIndex = (_currentProcessIndex + 1) % _noOfProcesses;
    }
    printf("\n\n");
}

void scheduleRoundRobin(Process* processes, int noOfProcesses,
                        int timeQuantum) {
    printf("Round Robin Scheduling\n");
    printf("======================\n");

    // Set global variables
    _noOfProcesses = noOfProcesses;
    _timeQuantum = timeQuantum;

    // Initialize processes and variables
    _initRR(processes);
    _printProcessesRR();

    // Schedule processes
    _scheduleProcessRR();

    // Print processes details
    _printProcessesDetailsRR();
}

#endif  // RR_H
