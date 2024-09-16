#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n from the user
    printf("Enter a number (n) to find the sum of first n natural numbers: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Output the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

