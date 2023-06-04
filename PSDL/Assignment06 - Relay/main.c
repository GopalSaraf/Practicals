#include <xc.h>
#include <pic18f458.h>

void main() {
    TRISBbits.TRISB1 = 1;  // Set RB1 as input for external interrupt
    TRISAbits.TRISA4 = 0;  // Set RA4 as output for relay control
    PORTAbits.RA4 = 0;     // Set RA4 initially low (relay off)

    // Interrupt on falling edge for RB1 (negative edge trigger)
    INTCON2bits.INTEDG1 = 0;
    INTCON3bits.INT1F = 0;  // Clear the external interrupt flag

    INTCON3bits.INT1E = 1;  // Enable the external interrupt INT1
    INTCONbits.PEIE = 1;    // Enable peripheral interrupts
    INTCONbits.GIE = 1;     // Enable global interrupts

    while (1)
        ;
}

void __interrupt() inr1_isr() {
    // Check if the external interrupt flag INT1IF is set
    if (INTCON3bits.INT1IF == 1) {
        INTCONbits.GIE = 0;  // Disable global interrupts
        PORTAbits.RA4 = 1;   // Set RA4 high to activate the relay

        for (unsigned int i = 0; i < 1000; i++) {
            for (unsigned int j = 0; j < 1000; j++) {
                // Delay loop
            }
        }

        PORTAbits.RA4 = 0;      // Set RA4 low to deactivate the relay
        INTCON3bits.INT1F = 0;  // Clear the external interrupt flag INT1IF
        INTCONbits.GIE = 1;     // Enable global interrupts
    }
}
