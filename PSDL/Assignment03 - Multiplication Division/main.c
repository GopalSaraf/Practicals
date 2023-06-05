#include <xc.h>
#include <pic18f458.h>

void main(void) {
    int choice = 0xFF;  // Initialize the "choice" variable with a value of 0xFF
                        // (255 in decimal)

    TRISB = 0x00;  // Set PORTB as output
    TRISC = 0x00;  // Set PORTC as output

    TMR1H = 0x2C;  // Assign a value of 0x2C to the high byte of Timer1
    TMR1L = 0x1F;  // Assign a value of 0x1F to the low byte of Timer1

    while (1) {
        if (choice == 1) {
            TMR0 = TMR1H * TMR1L;  // Multiply the high and low bytes of Timer1
                                   // and store the result in Timer0
            PORTB = TMR0H;         // Output the high byte of Timer0 to PORTB
            PORTC = TMR0L;         // Output the low byte of Timer0 to PORTC
        }

        if (choice == 2) {
            PORTB = TMR1H / TMR1L;  // Divide the high byte of Timer1 by the low
                                    // byte and output the result to PORTB
            PORTC = TMR1H % TMR1L;  // Calculate the remainder of the division
                                    // and output it to PORTC
        }
    }

    return;
}
