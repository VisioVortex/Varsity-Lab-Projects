#include <stdio.h>

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    // Print the multiplication table using a for loop
    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

