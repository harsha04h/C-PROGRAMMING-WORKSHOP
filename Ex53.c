//Array of String Pointers
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    // Array of pointers to strings
    char *strings[10];
	int i,n,strl;
	printf("Enter - How many strings (to Input)");
	scanf("%d",&n);
    // Input each string
    for (i = 0; i < n; i++) 
	{
        printf("Enter length of a String (to be inputed) ::");
		scanf("%d",&strl);
		strings[i] = (char *)malloc(strl * sizeof(char));
		printf("Enter String::");
		scanf("%s", strings[i]);
    }
    // Print each string
    for (i = 0; i < n; i++) 
	{
        printf("%s\n", strings[i]);
    }
    return 0;
}
