#include <xc.h>
#include <pic18f458.h>

// Function to introduce a delay in seconds
void delay(unsigned int seconds) {
    // Loop for the specified number of seconds
    for (unsigned int i = 0; i < seconds; i++) {
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
    TRISB = 0x00;  // Set PORTB as output

    while (1) {
        PORTB = 0x01;  // Turn on LED1

        while (PORTB != 0x80) {
            // Shift the value of PORTB to the left by 1 bit (multiply by 2)
            // This effectively turns on the next LED in the shift pattern
            PORTB *= 2;

            // Call the delay function to introduce a delay of 1 second
            delay(1);
        }
    }
}
