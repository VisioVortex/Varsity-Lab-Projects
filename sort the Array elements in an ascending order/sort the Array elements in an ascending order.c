#include <stdio.h>

int main() {
    int n, i, j, temp;

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

    // Sort the array in ascending order using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                // Swap the elements
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Array elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // Print name and roll number
    printf("\n\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

