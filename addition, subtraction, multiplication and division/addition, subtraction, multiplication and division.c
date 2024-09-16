#include <stdio.h>

int main() {
    int num1, num2;
    int addition, subtraction, multiplication;
    float division;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;

    if (num2 != 0) {
        division = (float)num1 / num2;  // Typecast to float for accurate division
    } else {
        printf("Division by zero is not allowed.\n");
        division = 0.0;
    }

    // Output the results
    printf("Addition: %d + %d = %d\n", num1, num2, addition);
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtraction);
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiplication);

    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, division);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}
