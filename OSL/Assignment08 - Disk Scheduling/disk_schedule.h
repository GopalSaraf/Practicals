#ifndef DISK_SCHEDULE_H
#define DISK_SCHEDULE_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "request.h"

enum Algorithm { SSTF = 1, SCAN = 2, C_LOOK = 3 };
enum Direction { NONE = 0, LEFT = 1, RIGHT = 2 };

static const char* ALGORITHM_STRINGS[] = {"", "SSTF", "SCAN", "C-LOOK"};
static const char* DIRECTION_STRINGS[] = {"", "LEFT", "RIGHT"};

static const int MAX_POSITION = 4999;

static Request* _requests;
static Request* _path;

static int _numRequests;
static int _remainingRequests;

static int _head;
static int _headIndex;

static int _start;
static int _end;

static enum Algorithm _algorithm;
static enum Direction _direction;

static int _currentIndex;
static int _pathIndex;
static int _totalHeadMovement;

// Sort requests by position
static void _sortRequestsByPosition() {
    for (int i = 0; i < _numRequests; i++) {
        for (int j = i + 1; j < _numRequests; j++) {
            if (_requests[i].position > _requests[j].position) {
                Request temp = _requests[i];
                _requests[i] = _requests[j];
                _requests[j] = temp;
            }
        }
    }
}

// Initialize
static void _init() {
    _sortRequestsByPosition();

    for (int i = 0; i < _numRequests; i++) {
        _requests[i].isFinished = 0;

        if (_requests[i].position == _head) {
            _headIndex = i;
        }
    }

    int additonalRequests = 0;
    if (_algorithm == SCAN) {
        additonalRequests = 2;  // start and end
    }

    _path =
        (Request*)malloc(sizeof(Request) * _numRequests + additonalRequests);

    _remainingRequests = _numRequests;
    _currentIndex = _headIndex;
    _pathIndex = 0;
    _totalHeadMovement = 0;
}

// print requests
static void _printRequests() {
    printf("Requests: \n");
    printf("ID\tPosition\n");
    for (int i = 0; i < _numRequests; i++) {
        printf("%d\t%d\n", _requests[i].id, _requests[i].position);
    }
    printf("\n");
    printf("Algorithm: %s\n", ALGORITHM_STRINGS[_algorithm]);

    if (_algorithm == SCAN || _algorithm == C_LOOK) {
        printf("Direction: %s\n", DIRECTION_STRINGS[_direction]);
    }

    printf("Head: %d\n", _head);
    printf("Start: %d\n", _start);
    printf("End: %d\n\n", _end);
}

// Calculate absolute distance between two numbers
static int _distance(int a, int b) { return abs(a - b); }

static void __schedule_SSTF() {
    while (_remainingRequests > 1) {
        int minDistance = MAX_POSITION;
        int minIndex = -1;

        for (int i = 0; i < _numRequests; i++) {
            if (!_requests[i].isFinished) {
                int distance = _distance(_requests[i].position,
                                         _requests[_currentIndex].position);

                if (distance < minDistance) {
                    minDistance = distance;
                    minIndex = i;
                }
            }
        }

        printf("Current Head: %d, Next head: %d\t\tDistance: %d\n",
               _requests[_currentIndex].position, _requests[minIndex].position,
               minDistance);

        _totalHeadMovement += minDistance;
        _currentIndex = minIndex;
        _remainingRequests--;

        _requests[_currentIndex].isFinished = 1;
        _path[_pathIndex] = _requests[_currentIndex];
        _pathIndex++;
    }

    // Add last request
    _requests[_currentIndex].isFinished = 1;
    _path[_pathIndex] = _requests[_currentIndex];
    _pathIndex++;
}

static void ___seek(int startIndex, int EndIndex, int offset) {
    for (int i = startIndex; i != EndIndex + offset; i += offset) {
        if (!_requests[i].isFinished) {
            int distance = _distance(_requests[i].position,
                                     _requests[_currentIndex].position);

            printf("Current Head: %d, Next head: %d\t\tDistance: %d\n",
                   _requests[_currentIndex].position, _requests[i].position,
                   distance);

            _totalHeadMovement += distance;

            _currentIndex = i;
            _remainingRequests--;

            _requests[_currentIndex].isFinished = 1;
            _path[_pathIndex] = _requests[_currentIndex];
            _pathIndex++;
        }
    }
}

static void __schedule_SCAN() {
    if (_direction == LEFT) {
        // Seek left
        ___seek(_currentIndex, 0, -1);

        // Add start
        _path[_pathIndex] = (Request){-1, _start, 0};
        _pathIndex++;

        _totalHeadMovement +=
            _distance(_start, _requests[_currentIndex].position) * 2;

        printf("Add start: %d\tDistance: %d\n", _start,
               _distance(_start, _requests[_currentIndex].position) * 2);

        // Seek right
        ___seek(_currentIndex, _numRequests - 1, 1);

        // Add end
        _path[_pathIndex] = (Request){-2, _end, 0};
        _pathIndex++;

        _totalHeadMovement +=
            _distance(_end, _requests[_currentIndex].position);

        printf("Add end: %d\tDistance: %d\n", _end,
               _distance(_end, _requests[_currentIndex].position));

    } else {
        // Seek right
        ___seek(_currentIndex, _numRequests - 1, 1);

        // Add end
        _path[_pathIndex] = (Request){-2, _end, 0};
        _pathIndex++;

        _totalHeadMovement +=
            _distance(_end, _requests[_currentIndex].position) * 2;

        printf("Add end: %d\tDistance: %d\n", _end,
               _distance(_end, _requests[_currentIndex].position) * 2);

        // Seek left
        ___seek(_currentIndex, 0, -1);

        // Add start
        _path[_pathIndex] = (Request){-1, _start, 0};
        _pathIndex++;

        _totalHeadMovement +=
            _distance(_start, _requests[_currentIndex].position);

        printf("Add start: %d\tDistance: %d\n", _start,
               _distance(_start, _requests[_currentIndex].position));
    }
}

static void __schedule_C_LOOK() {
    if (_direction == LEFT) {
        // Seek left
        ___seek(_currentIndex, 0, -1);

        // Seek right
        ___seek(_currentIndex, _numRequests - 1, 1);

        // Seek left upto head + 1
        printf("Current Head: %d, Next head: %d\t\tDistance: %d\n",
               _requests[_currentIndex].position,
               _requests[_headIndex + 1].position,
               _distance(_requests[_currentIndex].position,
                         _requests[_headIndex + 1].position));

        _totalHeadMovement += _distance(_requests[_currentIndex].position,
                                        _requests[_headIndex + 1].position);
    } else {
        // Seek right
        ___seek(_currentIndex, _numRequests - 1, 1);

        // Seek left
        ___seek(_currentIndex, 0, -1);

        // Seek right upto head - 1
        printf("Current Head: %d, Next head: %d\t\tDistance: %d\n",
               _requests[_currentIndex].position,
               _requests[_headIndex - 1].position,
               _distance(_requests[_currentIndex].position,
                         _requests[_headIndex - 1].position));

        _totalHeadMovement += _distance(_requests[_currentIndex].position,
                                        _requests[_headIndex - 1].position);
    }
}

// Schedule
static void _schedule() {
    // Head is finsihed
    _requests[_headIndex].isFinished = 1;
    _path[_pathIndex] = _requests[_headIndex];
    _pathIndex++;

    switch (_algorithm) {
        case SSTF:
            __schedule_SSTF();
            break;
        case SCAN:
            __schedule_SCAN();
            break;
        case C_LOOK:
            __schedule_C_LOOK();
            break;
        default:
            break;
    }
}

// Print details
static void _printDetails() {
    printf("\n");

    int lastIndexToPrint;
    if (_algorithm == SCAN || _algorithm == C_LOOK) {
        lastIndexToPrint = _pathIndex;
    } else {
        lastIndexToPrint = _pathIndex - 1;
    }

    printf("Path: \n");
    for (int i = 0; i < lastIndexToPrint; i++) {
        char* pos;
        switch (_path[i].id) {
            case -1:
                pos = " [START]";
                break;
            case -2:
                pos = " [END]";
                break;
            default:
                pos = "";
                break;
        }

        i == lastIndexToPrint - 1 ? printf("%d%s\n", _path[i].position, pos)
                                  : printf("%d%s -> ", _path[i].position, pos);
    }
    printf("\n");
    printf("Total Head Movement: %d\n", _totalHeadMovement);
}

// Disk Scheduling Algorithms
void diskSchedule(Request* requests, int numRequests, int head, int start,
                  int end, enum Algorithm algorithm, enum Direction direction) {
    _requests = requests;
    _numRequests = numRequests;
    _head = head;
    _start = start;
    _end = end;
    _algorithm = algorithm;
    _direction = direction;

    _printRequests();  // Print requests
    _init();           // Initialize
    _schedule();       // Schedule
    _printDetails();   // Print details
    free(_path);       // Free path memory
}

#endif  // DISK_SCHEDULE_H