#ifndef FRAME_H
#define FRAME_H

typedef struct Frame {
    int page;
    int* frame;
    int frameSize;
    int index;
    int pageHit;
} Frame;

#endif  // FRAME_H