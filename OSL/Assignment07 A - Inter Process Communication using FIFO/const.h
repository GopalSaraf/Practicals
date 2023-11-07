#ifndef CONST_H
#define CONST_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

const char* const FIFO_1 = "fifo1";
const char* const FIFO_2 = "fifo2";

const char* const TXT_FILE = "file.txt";

const int MAX_BUF = 1024;

const mode_t FIFO_MODE = 0666;

#endif  // CONST_H