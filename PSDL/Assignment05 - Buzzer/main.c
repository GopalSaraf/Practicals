#include <xc.h>
#include <pic18f4550.h>

int buzz_on = 0;  // Variable to keep track of the buzzer state
int count = 0;    // Counter helper variable

void main() {
    TRISAbits.TRISA5 = 0;  // Updating RA5 bit to output mode for buzzer
    TMR1 = 0x6D84;         // Set the initial value of Timer1
    T1CON = 0xB0;  // Configure Timer1 control register with desired settings
    PIR1bits.TMR1IF = 0;   // Clear the Timer1 interrupt flag
    PIE1bits.TMR1IE = 1;   // Enable Timer1 interrupt
    INTCONbits.PEIE = 1;   // Enable peripheral interrupts
    INTCONbits.GIE = 1;    // Enable global interrupts
    T1CONbits.TMR1ON = 1;  // Turn on Timer1

    while (1)
        ;
}

void __interrupt() timer1_isr() {
    // If Timer1 interrupt flag is set
    if (PIR1bits.TMR1IF == 1) {
        // Disable global interrupts to perform interrupt handling
        INTCONbits.GIE = 0;
        count++;  // Increment the counter

        // If the buzzer is off and 1 second has passed (count is 40)
        if (buzz_on == 0 && count == 40) {
            buzz_on = 1;        // Set the buzzer state to on
            PORTAbits.RA5 = 1;  // Turn on the buzzer by setting RA5 pin high
            count = 0;          // Reset the counter
        }

        // If the buzzer is on and 0.25 seconds have passed (count is 10)
        if (buzz_on == 1 && count == 10) {
            buzz_on = 0;        // Set the buzzer state to off
            PORTAbits.RA5 = 0;  // Turn off the buzzer by setting RA5 pin low
            count = 0;          // Reset the counter
        }

        PIR1bits.TMR1IF = 0;  // Clear the Timer1 interrupt flag
        TMR1 = 0x6D84;        // Set the initial value of Timer1
        INTCONbits.GIE = 1;   // Enable global interrupts
    }
}
