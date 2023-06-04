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
    TRISB = 0;  // Set all PORTB pins as outputs

    // Set the initial value of PORTB as 0xAA (alternating high-low pattern)
    PORTB = 0xAA;

    while (1) {
        // Toggle the PORTB pins by performing bitwise XOR with 0xFF
        PORTB ^= 0xFF;
        delay(1);  // Call the delay function to introduce a delay of 1 second
    }
}
