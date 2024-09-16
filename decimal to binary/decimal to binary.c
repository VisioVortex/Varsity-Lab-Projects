#include <stdio.h>

int main() {
    int decimalNumber, remainder, binaryNumber = 0, place = 1;

    // Input the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    int originalNumber = decimalNumber; // Store original number for display

    // Convert decimal to binary using a while loop
    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * place;
        place *= 10;
        decimalNumber /= 2;
    }

    // Output the binary equivalent
    printf("The binary equivalent of %d is: %d\n", originalNumber, binaryNumber);

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

