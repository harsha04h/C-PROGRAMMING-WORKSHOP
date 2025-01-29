#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100];

    // String length
    printf("Length of str1: %zu\n", strlen(str1));

    // String copy
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // String concatenation
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // String comparison
    if (strcmp(str1, str2) == 0) 
	{
        printf("str1 and str2 are equal.\n");
    } 
	else 
	{
        printf("str1 and str2 are not equal.\n");
    }

    // Searching in a string
    char *pos = strchr(str1, 'o');
    if (pos != NULL) 
	{
        printf("First occurrence of 'o' in str1: %s\n", pos);
    }

    return 0;
}
