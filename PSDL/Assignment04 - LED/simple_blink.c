#include <xc.h>
#include <pic18f4550.h>

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
    PORTB = 0x00;  // Initialize PORTB value to 0x00 (all LEDs off)

    while (1) {
        PORTB ^= 0xFF;  // Toggle all bits of PORTB (invert its value)

        // Call the delay function to introduce a delay of 1 second
        delay(1);
    }
}
