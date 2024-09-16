
#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Conversion logic
    years = days / 365;              // Calculate the number of years
    remainingDays = days % 365;       // Remaining days after calculating years
    weeks = remainingDays / 7;        // Calculate the number of weeks
    remainingDays = remainingDays % 7; // Remaining days after calculating weeks

    // Output the result
    printf("%d days is equal to %d years, %d weeks, and %d days.\n", days, years, weeks, remainingDays);

    // Print name and roll number
    printf("\nName: MD Mainul Islam Rabby\n");
    printf("Roll Number: 4089\n");

    return 0;
}
