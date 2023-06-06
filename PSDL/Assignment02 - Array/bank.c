#include <xc.h>
#include <pic18f458.h>

void main() {
    int array[10];

    for (int i = 0; i < 10; i++) array[i] = i + 1;

    BSR = 1;

    int sum = 0;

    for (int i = 0; i < 10; i++) sum += array[i];

    while (1)
        ;
    return;
}