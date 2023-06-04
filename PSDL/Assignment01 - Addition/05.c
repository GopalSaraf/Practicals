#include <xc.h>
#include <pic18f458.h>

void main() {
    TMRO = 0x40;
    TMR1 = 0xC0;
    TMR2 = TMRO + TMR1;
    return;
}