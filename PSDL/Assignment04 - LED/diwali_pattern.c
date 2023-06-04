#include <xc.h>
#include <pic18f458.h>

// Function to introduce a delay in seconds
void delay(unsigned int seconds) {
    // Loop for the specified number of seconds
    for (unsigned int i = 0; i < seconds; i++) {
        // Configure Timer0
        T0CON = 0x07;  // Set the Timer0 control register with desired settings
        TMR0 = 18661;  // Set the initial value of Timer0
        INTCONbits.TMR0IF = 0;  // Clear the Timer0 interrupt flag
        T0CONbits.TMR0ON = 1;   // Turn on Timer0

        // Wait until Timer0 overflow occurs (delay completion)
        while (INTCONbits.TMR0IF == 0)
            ;
    }
}

void main(void) {
    TRISB = 0x00;                  // Set PORTB as output
    PORTB = 0x01;                  // Turn on LED1 initially
    unsigned int futureValue = 2;  // Used to store the next value for PORTB

    while (1) {
        while (PORTB != 0xFF) {
            delay(1);
            futureValue *= 2;         // Double the future value
            PORTB = futureValue - 1;  // Set PORTB to the future value minus 1
        }

        while (PORTB != 0x01) {
            delay(1);
            futureValue /= 2;         // Halve the future value
            PORTB = futureValue - 1;  // Set PORTB to the future value minus 1
        }
    }
}
