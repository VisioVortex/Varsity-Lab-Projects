#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Input three integers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;  // Typecast to float for accurate division

    // Output the result
    printf("Average of %d, %d, and %d = %.2f\n", num1, num2, num3, average);

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

