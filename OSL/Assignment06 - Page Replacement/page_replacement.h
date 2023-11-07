#ifndef PAGE_REPLACEMENT_H
#define PAGE_REPLACEMENT_H

#include <stdio.h>
#include <stdlib.h>

#include "frame.h"

enum Algorithm { FIFO = 1, LRU = 2, OPTIMAL = 3 };

static const char* ALGORITHM_STRINGS[] = {"", "FIFO", "LRU", "OPTIMAL"};

static const int INT_MAX = 5000;

static int* _pageRequests;
static int _numPageRequests;
static int _frameSize;
static enum Algorithm _algorithm;

static Frame* _frames;
static int _numPageHits;

// Initialize frames and other variables
static void _init() {
    _numPageHits = 0;
    _frames = (Frame*)malloc(sizeof(Frame) * _numPageRequests);

    for (int i = 0; i < _numPageRequests; i++) {
        _frames[i].page = _pageRequests[i];
        _frames[i].frame = (int*)malloc(sizeof(int) * _frameSize);

        for (int j = 0; j < _frameSize; j++) {
            _frames[i].frame[j] = -1;
        }

        _frames[i].frameSize = _frameSize;
        _frames[i].index = 0;
        _frames[i].pageHit = 0;
    }
}

// Find the index of the page in the last frame
static int _findPageInLastFrame(int frameIndex) {
    if (frameIndex == 0) {
        return -1;
    }

    int page = _frames[frameIndex].page;

    for (int i = 0; i < _frameSize; i++) {
        if (_frames[frameIndex - 1].frame[i] == page) {
            return i;
        }
    }

    return -1;
}

// Find the index of the maximum value in the array
static int __findMaxIndex(int* array, int size) {
    int max = array[0];
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}

// Find the index of the page to be replaced if there is an empty space
static int __findPageReplacementIndex_EmptyFrame(int frameIndex) {
    if (frameIndex == 0) {
        return 0;
    }

    for (int i = 0; i < _frameSize; i++) {
        if (_frames[frameIndex - 1].frame[i] == -1) {
            return i;
        }
    }

    return -1;
}

// Find the index of the page to be replaced (FIFO)
static int __findPageReplacementIndex_FIFO(int frameIndex) {
    int pageOccurrenceCount[_frameSize];

    for (int i = 0; i < _frameSize; i++) {
        pageOccurrenceCount[i] = 0;
    }

    for (int i = 0; i < _frameSize; i++) {
        for (int j = frameIndex - 1; j >= 0; j--) {
            if (_frames[j].frame[i] == _frames[frameIndex - 1].frame[i]) {
                pageOccurrenceCount[i]++;
            } else {
                break;
            }
        }
    }

    return __findMaxIndex(pageOccurrenceCount, _frameSize);
}

// Find the index of the page to be replaced (LRU)
static int __findPageReplacementIndex_LRU(int frameIndex) {
    int pageOccurrenceCount[_frameSize];

    for (int i = 0; i < _frameSize; i++) {
        pageOccurrenceCount[i] = 0;
    }

    for (int i = 0; i < _frameSize; i++) {
        for (int j = frameIndex - 1; j >= 0; j--) {
            if (_frames[j].frame[i] == _frames[frameIndex - 1].frame[i]) {
                pageOccurrenceCount[i]++;

                if (_frames[j].pageHit && _frames[j].index == i) {
                    break;
                }
            } else {
                break;
            }
        }
    }

    return __findMaxIndex(pageOccurrenceCount, _frameSize);
}

// Find the index of the page to be replaced (OPTIMAL)
static int __findPageReplacementIndex_OPTIMAL(int frameIndex) {
    int futurePageOccurrenceOffset[_frameSize];

    for (int i = 0; i < _frameSize; i++) {
        futurePageOccurrenceOffset[i] =
            INT_MAX;  // Initialize with a large value
    }

    for (int i = 0; i < _frameSize; i++) {
        for (int j = frameIndex + 1; j < _numPageRequests; j++) {
            if (_frames[j].page == _frames[frameIndex - 1].frame[i]) {
                futurePageOccurrenceOffset[i] = j - frameIndex;
                break;
            }
        }
    }

    return __findMaxIndex(futurePageOccurrenceOffset, _frameSize);
}

// Find the index of the page to be replaced
static int _findPageReplacementIndex(int frameIndex) {
    if (__findPageReplacementIndex_EmptyFrame(frameIndex) != -1) {
        return __findPageReplacementIndex_EmptyFrame(frameIndex);
    }

    switch (_algorithm) {
        case FIFO:
            return __findPageReplacementIndex_FIFO(frameIndex);
        case LRU:
            return __findPageReplacementIndex_LRU(frameIndex);
        case OPTIMAL:
            return __findPageReplacementIndex_OPTIMAL(frameIndex);
        default:
            return -1;
    }
}

// Fill frames (page hit)
static void _fillFrames_PageHit(int frameIndex, int pageInLastFrameIndex) {
    // Copy the previous frame
    for (int i = 0; i < _frameSize; i++) {
        _frames[frameIndex].frame[i] = _frames[frameIndex - 1].frame[i];
    }

    _frames[frameIndex].pageHit = 1;                   // Page hit
    _frames[frameIndex].index = pageInLastFrameIndex;  // Update index

    _numPageHits++;  // Update number of page hits
}

// Fill frames (page fault)
static void _fillFrames_PageFault(int frameIndex, int pageReplacementIndex) {
    if (frameIndex == 0) {  // First frame
        _frames[frameIndex].frame[pageReplacementIndex] =
            _frames[frameIndex].page;                      // Page fault
        _frames[frameIndex].index = pageReplacementIndex;  // Update index
        return;
    }

    // Copy the previous frame
    for (int i = 0; i < _frameSize; i++) {
        _frames[frameIndex].frame[i] = _frames[frameIndex - 1].frame[i];
    }

    _frames[frameIndex].frame[pageReplacementIndex] =
        _frames[frameIndex].page;                      // Page fault
    _frames[frameIndex].index = pageReplacementIndex;  // Update index
}

static void _printResults() {
    printf("\n");
    printf("Number of page requests: %d\n", _numPageRequests);

    printf("Page requests: ");
    for (int i = 0; i < _numPageRequests; i++) {
        printf("%d ", _pageRequests[i]);
    }
    printf("\n\n");

    printf("Algorithm: %s\n", ALGORITHM_STRINGS[_algorithm]);
    printf("Frame size: %d\n\n", _frameSize);

    printf("Page \t Frame \t\t Page hit/fault\n");
    for (int i = 0; i < _numPageRequests; i++) {
        printf("%d \t ", _frames[i].page);

        printf("[ ");
        for (int j = 0; j < _frameSize; j++) {
            if (_frames[i].frame[j] == -1) {
                printf("- ");
            } else {
                printf("%d ", _frames[i].frame[j]);
            }
        }

        printf("]\t ");

        if (_frames[i].pageHit) {
            printf("Hit");
        } else {
            printf("Fault");
        }

        printf("\n");
    }
    printf("\n");

    printf("Number of page hits: %d\n", _numPageHits);
    printf("Number of page faults: %d\n", _numPageRequests - _numPageHits);
    printf("Page fault rate: %.2f%%\n",
           (float)(_numPageRequests - _numPageHits) / _numPageRequests * 100);
    printf("\n");
}

// Page replacement
void pageReplacement(int* pageRequests, int numPageRequests, int frameSize,
                     enum Algorithm algorithm) {
    _pageRequests = pageRequests;
    _numPageRequests = numPageRequests;
    _frameSize = frameSize;
    _algorithm = algorithm;

    _init();  // Initialize frames and other variables

    for (int i = 0; i < _numPageRequests; i++) {
        int pageInLastFrameIndex = _findPageInLastFrame(i);

        if (pageInLastFrameIndex != -1) {  // Page hit
            _fillFrames_PageHit(i, pageInLastFrameIndex);
        } else {  // Page fault
            int pageReplacementIndex = _findPageReplacementIndex(i);
            _fillFrames_PageFault(i, pageReplacementIndex);
        }
    }

    _printResults();  // Print results

    // Free memory
    for (int i = 0; i < _numPageRequests; i++) {
        free(_frames[i].frame);
    }
    free(_frames);
}

#endif  // PAGE_REPLACEMENT_H