#ifndef SJF_H
#define SJF_H

#include <stdio.h>
#include "process.h"

#define MAX_PROCESSES 100

static Process _processes[MAX_PROCESSES];

static int _noOfProcesses;
static int _noOfRemainingProcesses;

static int _totalWaitingTime;
static int _totalTurnAroundTime;

static int _currentTime;

// Initialize processes and variables
static void _initSJF(Process* processes) {
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
        _noOfProcesses;  // Reset no of remaining processes

    // Set current time to minimum arrival time
    _currentTime = _processes[0].arrivalTime;

    for (int i = 0; i < _noOfProcesses; i++) {
        if (_processes[i].arrivalTime < _currentTime) {
            _currentTime = _processes[i].arrivalTime;
        }
    }
}

// Print processes details (arrival time and burst time)
static void _printProcessesSJF() {
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
static void _printProcessesDetailsSJF() {
    printf("Processes: \n");
    printf("PID\tAT\tBT\tWT\tTAT\n");

    for (int i = _noOfProcesses; i > 0; i--) {
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
static void _printGanttChartSJF(int withPid) {
    if (withPid) {
        printf("P%d (%d) | ", _processes[0].pid, _currentTime);
    } else {
        printf("IDLE (%d) | ", _currentTime);
    }
}

// Check if current process is arrived
static int _isProcessArrivedSJF() {
    return _processes[0].arrivalTime <= _currentTime;
}

// Check if current process is finished
static int _isProcessFinishedSJF() { return _processes[0].remainingTime == 0; }

// Set waiting time and update total waiting time
static void _setWaitingTimeSJF() {
    _processes[0].waitingTime =
        _currentTime - _processes[0].burstTime - _processes[0].arrivalTime;

    _totalWaitingTime += _processes[0].waitingTime;
}

// Set turn around time and update total turn around time
static void _setTurnAroundTimeSJF() {
    _processes[0].turnAroundTime = _currentTime - _processes[0].arrivalTime;

    _totalTurnAroundTime += _processes[0].turnAroundTime;
}

// Sort processes by remaining time
static void _sortProcessesByRemainingTimeSJF() {
    for (int i = 0; i < _noOfRemainingProcesses; i++) {
        for (int j = i + 1; j < _noOfRemainingProcesses; j++) {
            if (_processes[i].remainingTime > _processes[j].remainingTime) {
                Process temp = _processes[i];
                _processes[i] = _processes[j];
                _processes[j] = temp;
            }
        }
    }
}

// Shift not arrived processes to the end of the array
static void _shiftNotArrivedProcessesSJF() {
    while (!_isProcessArrivedSJF()) {
        Process temp = _processes[0];
        for (int i = 0; i < _noOfRemainingProcesses - 1; i++) {
            _processes[i] = _processes[i + 1];
        }
        _processes[_noOfRemainingProcesses - 1] = temp;
    }
}

// Remove finished processes to the end of the array
static void _removeFinishedProcessesSJF() {
    Process temp = _processes[0];
    for (int i = 0; i < _noOfRemainingProcesses; i++) {
        _processes[i] = _processes[i + 1];
    }
    _processes[_noOfRemainingProcesses] = temp;
    _noOfRemainingProcesses--;
}

// Schedule processes using SJF algorithm
static void _scheduleProcessSJF() {
    printf("Gantt Chart: ");
    _printGanttChartSJF(0);

    while (_noOfRemainingProcesses) {
        // Sort processes by remaining time
        _sortProcessesByRemainingTimeSJF();
        _shiftNotArrivedProcessesSJF();

        // Check if current process is arrived and not finished
        if (_isProcessArrivedSJF() && !_isProcessFinishedSJF()) {
            _currentTime++;
            _processes[0].remainingTime--;
            _printGanttChartSJF(1);

            // Check if current process is finished
            if (_isProcessFinishedSJF()) {
                _setWaitingTimeSJF();
                _setTurnAroundTimeSJF();
                _removeFinishedProcessesSJF();
            }
        }
    }
    printf("\n\n");
}

void scheduleSJF(Process* processes, int noOfProcesses) {
    printf("SJF Scheduling\n");
    printf("==============\n\n");

    // Set global variables
    _noOfProcesses = noOfProcesses;

    // Initialize processes and variables
    _initSJF(processes);
    _printProcessesSJF();

    // Schedule processes
    _scheduleProcessSJF();

    // Print processes details
    _printProcessesDetailsSJF();
}

#endif  // SJF_H