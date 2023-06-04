#include <xc.h>
#include <pic18f458.h>

void main() {
    TMRO = 0x48;
    TMR1 = 0x28;
    TMR2 = TMRO + TMR1;
    return;
}