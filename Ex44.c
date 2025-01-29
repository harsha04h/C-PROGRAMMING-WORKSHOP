#include <stdio.h>

int main() 
{
    char ch;
    char str[100];

    // Demonstrating getchar() and putchar()
    printf("Enter a single character: ");
    ch = getchar(); // Reads a single character
    printf("You entered: ");
    putchar(ch); // Writes a single character
    putchar('\n');

    // Demonstrating gets() and puts()
    printf("Enter a string: ");
    // Note: gets() is unsafe and deprecated. Use fgets() in modern C programs.
    fflush(stdin);
	gets(str); // Reads a string
    printf("You entered: ");
    puts(str); // Writes a string

    return 0;
}
