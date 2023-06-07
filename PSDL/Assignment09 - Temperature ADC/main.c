#include <xc.h>
#include <pic18f4550.h>
#include <stdio.h>

#define LCD_RS PORTAbits.RA0  // Register select pin
#define LCD_EN PORTAbits.RA1  // Enable pin

// Function to introduce a small delay
void delay() {
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            ;
}

// Function to send an instruction to the LCD
void sendInstruction(int command) {
    LCD_RS = 0;       // RS low: Instruction mode
    PORTB = command;  // Send the command byte to PORTB
    LCD_EN = 1;       // Enable high
    delay();          // Delay to stabilize the signal
    LCD_EN = 0;       // Enable low; command sampled at falling edge
    delay();          // Delay before the next operation
}

// Function to send data to the LCD
void sendData(int data) {
    LCD_RS = 1;    // RS high: Data mode
    PORTB = data;  // Send the data byte to PORTB
    LCD_EN = 1;    // Enable high
    delay();       // Delay to stabilize the signal
    LCD_EN = 0;    // Enable low; data sampled at falling edge
    delay();       // Delay before the next operation
}

// Function to read temperature from the LM35 sensor
int readTemp() {
    ADCON0 = 0b00011001;     // ADC on; Select channel
    ADCON0bits.GO_DONE = 1;  // Start Conversion
    while (ADCON0bits.GO_DONE == 0)
        ;                       // Wait till A/D conversion is complete
    return ADRES * 500 / 1023;  // Return ADC result in degree celsius
}

void main() {
    ADCON1 = 0x0F;         // Configure ADCON1 register for digital I/O
    TRISB = 0;             // Configure PORTB as output
    TRISAbits.TRISA0 = 0;  // For register select pin
    TRISAbits.TRISA1 = 0;  // For Enable pin

    sendInstruction(0x38);  // 8 bit mode, 2 lines, 5x7 dots
    sendInstruction(0x01);  // Clear display

    delay();  // Delay for display to clear

    sendInstruction(0x80);  // Set address to 1st line

    unsigned int temp;  // Variable to store temperature

    while (1) {
        temp = readTemp();         // Read temperature
        sendData(temp / 10 + 48);  // Send the first digit
        sendData(temp % 10 + 48);  // Send the second digit
        delay();                   // Delay before the next reading
    }
}
