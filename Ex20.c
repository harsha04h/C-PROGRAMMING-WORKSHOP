#include <stdio.h>

int main() 
{
    int i, j, k;
    char ch;
	int rows;
    printf("Enter: Total number of rows for the pattern::");
    scanf("%d",&rows);

// Loop to control the number of rows
    for (i = 1; i <= rows; i++) 
	{
// Print first part of the pattern (A to some letter)
        ch = 'A';
        for (j = 1; j <= rows - i + 1; j++) 
		{
            printf("%c ", ch);
            ch++;
        }

// Print spaces in between
        for (k = 1; k <= 2 * (i - 1) - 1; k++) 
		{
            printf("  ");  // two spaces
        }

// Print second part of the pattern (descending from letter)
        ch--;
        for (j = 1; j <= rows - i + 1; j++) 
		{
            printf("%c ", ch);
            ch--;
        }

// Move to the next line after each row
        printf("\n");
    }

    return 0;
}
