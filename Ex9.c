#include <stdio.h>

int main() {
    int rows, i, j, k;

    // Take input for number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Loop for spaces before the stars
        for (j = i; j < rows; j++) {
            printf(" ");  // Print leading spaces
        }
        
        // Loop for printing stars in each row
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");  // Print stars
        }
        
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
