#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, originalNumber, remainder, sum = 0;

    // Input the number from the user
    printf("Enter a number to check if it is a Strong number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the sum of the factorials of each digit
    while (number != 0) {
        remainder = number % 10;
        sum += factorial(remainder);
        number /= 10;
    }

    // Check if the sum of factorials is equal to the original number
    if (sum == originalNumber) {
        printf("%d is a Strong number.\n", originalNumber);
    } else {
        printf("%d is not a Strong number.\n", originalNumber);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

