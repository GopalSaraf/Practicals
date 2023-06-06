#include <xc.h>
#include <pic18f4550.h>

// The motor speed is increased from minimum to maximum and then again it will
// be zero. This process is repeated continuously.
void main(void) {
    PR2 = 250;             // Set the period register for desired PWM frequency
    TRISCbits.TRISC2 = 0;  // Set RC2 pin as output for PWM signal
    T2CON = 0;             // Clear Timer2 control register
    TMR2 = 0;              // Clear Timer2 value
    CCP1CON = 12;          // Configure CCP1 module for PWM mode
    T2CONbits.TMR2ON = 1;  // Turn on Timer2

    while (1) {
        CCPR1L = 0;  // Start with motor speed at minimum

        // Increase motor speed from minimum to maximum
        for (int count = 0; count < 6; count++) {
            CCPR1L += 50;  // Increase motor speed by increasing duty cycle

            // Delay loop to control the speed change duration
            for (unsigned int i = 0; i < 1000; i++)
                for (unsigned int j = 0; j < 1000; j++)
                    ;
        }
    }
}

// The motor speed is increased from minimum to maximum and then decreased from
// maximum to minimum. This process is repeated continuously.
void main2(void) {
    PR2 = 250;             // Set the period register for desired PWM frequency
    TRISCbits.TRISC2 = 0;  // Set RC2 pin as output for PWM signal
    T2CON = 0;             // Clear Timer2 control register
    TMR2 = 0;              // Clear Timer2 value
    CCP1CON = 12;          // Configure CCP1 module for PWM mode
    T2CONbits.TMR2ON = 1;  // Turn on Timer2

    while (1) {
        CCPR1L = 0;  // Start with motor speed at minimum

        // Increase motor speed from minimum to maximum
        for (int count = 0; count < 6; count++) {
            CCPR1L += 50;  // Increase motor speed by increasing duty cycle

            // Delay loop to control the speed change duration
            for (unsigned int i = 0; i < 1000; i++)
                for (unsigned int j = 0; j < 1000; j++)
                    ;
        }

        // Decrease motor speed from maximum to minimum
        for (int count = 0; count < 6; count++) {
            CCPR1L -= 50;  // Decrease motor speed by decreasing duty cycle

            // Delay loop to control the speed change duration
            for (unsigned int i = 0; i < 1000; i++)
                for (unsigned int j = 0; j < 1000; j++)
                    ;
        }
    }
}