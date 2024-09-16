#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number for later comparison
    originalNumber = number;

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reversed version
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

