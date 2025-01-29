#include"stdio.h"

int main()			
{
	float num1=1.5F, num2, num3, average;
    
	printf("Enter two numbers: ");
    scanf("%f %f", &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf("The average of three numbers %f, %f and %f is: %9.2f\n", num1,num2,num3,average);
    const float PI = 3.14159;
    printf("The PI value is: %f%\n", PI);
    //PI=4.56;
    printf("The PI Value is: %f%\n", PI);
 	printf("\n");
 	
 	return 1; 	
 }
 