#include <stdio.h>

int main() {
    int n, i, largest;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array to hold the elements
    int array[n];

    // Input the elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize the largest variable with the first element of the array
    largest = array[0];

    // Find the largest element in the array
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Output the result
    printf("The largest element in the array is: %d\n", largest);

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

