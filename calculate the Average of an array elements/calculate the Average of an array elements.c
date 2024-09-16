#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array to hold the elements
    int array[n];

    // Input the elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; // Sum the elements
    }

    // Calculate the average
    average = sum / n;

    // Output the result
    printf("The average of the array elements is: %.2f\n", average);

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

