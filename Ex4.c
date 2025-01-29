#include <stdio.h>

int main() 
{
    float a, b, c;
    
    printf("Enter three numbers in the format average-a (e.g., 12.5-5.3_4.5): ");
    if (scanf("%f-%f_%f", &a, &b, &c) == 3) 
	{ // Check if both inputs are read correctly
        printf("The three inputs are: %4.2f -- %f -- %.1f\n", a, b, c);
    } else 
	{
        printf("Invalid input format. Please use the format average-a (e.g., 12.5-5.3_4.5).\n");
    }

    return 0;
}
