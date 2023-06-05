#include <xc.h>
#include <pic18f458.h>

void main() {
    TMRO = 0x00;
    TMR1 = 0x00;
    TMR2 = TMRO + TMR1;
    return;
}