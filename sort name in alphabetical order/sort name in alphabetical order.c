#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char temp[100];

    // Input the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Declare a 2D array to hold the names
    char names[n][100];

    // Input the names from the user
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sort the names in alphabetical order using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap the names
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output the sorted names
    printf("Names in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}

