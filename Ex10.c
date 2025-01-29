#include <stdio.h>

int main() {
    int i, j, k, s=1;
    char ch;

    // Total number of rows for the pattern
    int rows = 8;

    // Loop to control the number of rows
    for (i = 1; i <= rows; i++) {
        // Print first part of the pattern (A to some letter)
        ch = 'A';
        for (j = 1; j <= rows - i + 1; j++) {
            printf("%c ", ch);
            ch++;
        }
        if(s++!=1)
			printf("  ");
		// Print spaces in between
        for (k = 1; k <= 2 * (i - 1) - 1; k++)             
			printf("  ");  // two spaces

        // Print second part of the pattern (descending from letter)
        ch--;
        k=1;
        for (j = 0; j <= rows - i + 1 ; j++) {
            if(k++!=1)
            	printf("%c ", ch);
           	else
           		ch++;
            ch--;
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
