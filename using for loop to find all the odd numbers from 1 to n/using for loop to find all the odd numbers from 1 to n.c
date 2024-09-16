#include <stdio.h>

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter a number (n) to find all odd numbers from 1 to n: ");
    scanf("%d", &n);

    // Output odd numbers from 1 to n using a for loop
    printf("Odd numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    // Print name and roll number
    printf("\n\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

