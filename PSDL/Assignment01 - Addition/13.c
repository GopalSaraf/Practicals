#include <xc.h>
#include <pic18f458.h>

void main() {
    TMRO = 0xC8;
    TMR1 = 0xE8;
    TMR2 = TMRO + TMR1;
    return;
}