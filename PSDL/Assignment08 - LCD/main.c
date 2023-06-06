#include <xc.h>
#include <pic18f4550.h>

#define LCD_RS PORTAbits.RA0  // Register select (RS) pin
#define LCD_EN PORTAbits.RA1  // Enable (EN) pin

// Function to introduce a small delay
void delay(int n) {
    // n is the number of iterations of the inner loop
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 1000; j++)
            ;
}

// Function to send an instruction to the LCD
void sendInstruction(unsigned char command) {
    LCD_RS = 0;       // RS low: Instruction mode
    PORTB = command;  // Send the command byte to PORTB
    LCD_EN = 1;       // Enable high
    delay(1);         // Delay to stabilize the signal
    LCD_EN = 0;       // Enable low; command sampled at falling edge
    delay(1);         // Delay before the next operation
}

// Function to send data to the LCD
void sendData(unsigned char data) {
    LCD_RS = 1;    // RS high: Data mode
    PORTB = data;  // Send the data byte to PORTB
    LCD_EN = 1;    // Enable high
    delay(1);      // Delay to stabilize the signal
    LCD_EN = 0;    // Enable low; data sampled at falling edge
    delay(1);      // Delay before the next operation
}

void main() {
    ADCON1 = 0x0F;  // Configure ADCON1 register for digital I/O
    TRISB = 0;      // Configure PORTB as output

    // Configure RA0 as output for register select (RS) pin
    TRISAbits.TRISA0 = 0;
    TRISAbits.TRISA1 = 0;  // Configure RA1 as output for enable (EN) pin

    sendInstruction(0x38);  // Initialize the LCD: 8-bit mode, 2 lines, 5x7 dots
    sendInstruction(0x01);  // Clear display
    delay(100);             // Delay for the display to clear

    sendInstruction(0x80);  // Set the address to the first line

    char *rollNo = "23168";  // Roll number

    // Print roll number on the first line
    while (*rollNo != '\0') {  // '\0' is the null character
        sendData(*rollNo);     // Send the character pointed to by rollNo
        rollNo++;  // Increment the pointer to point to the next character
    }

    delay(100);  // Delay before moving to the next line

    sendInstruction(0xC0);  // Move cursor to the second line

    char *name = "Gopal";  // Name

    // Print name on the second line
    while (*name != '\0') {  // '\0' is the null character
        sendData(*name);     // Send the character pointed to by name
        name++;  // Increment the pointer to point to the next character
    }

    delay(100);  // Delay for the display to show the name

    while (1)
        ;
}
