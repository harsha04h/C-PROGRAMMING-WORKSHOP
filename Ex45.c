#include <stdio.h>

int main() 
{
    int num, originalNum, reversedNum = 0, remainder,sum=0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) 
	{
        remainder = num % 10;            // Get the last digit
        sum+=remainder;
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                       // Remove the last digit from the original number
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) 
	{
        printf("%d is a palindrome.\n", originalNum);
    } 
	else 
	{
        printf("%d is not a palindrome.\n", originalNum);
    }
	printf("\nSum of digits of a number %d is %d",originalNum,sum);
    return 0;
}
