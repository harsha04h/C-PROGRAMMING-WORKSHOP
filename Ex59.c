// String using pointers
#include <stdio.h>

int main() 
{
    char str[100];
    char *ptr = str; // Pointer to the string
	printf("Enter a String:");
	scanf("%[^-]",str);
		
    while (*ptr != '\0') 
	{ // Traverse until null terminator
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}
