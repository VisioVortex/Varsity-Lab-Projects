#include <stdio.h>

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

