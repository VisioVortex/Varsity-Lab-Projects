#include <stdio.h>

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility by 5 and 11 using if-else
    if (number % 5 == 0 && number % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", number);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", number);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

