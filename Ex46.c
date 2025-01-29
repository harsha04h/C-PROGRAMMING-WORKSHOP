#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
	//printf("\nDigits of number %d is %d",num,n);
    originalNum = num;

    // Calculate the sum of the power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;  // Get the last digit
       	result += pow(remainder, n);  // Add the digit raised to the power n
        //printf("\n\n%d\n\n",result);
		originalNum /= 10;            // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("\n%d is an Armstrong number.\n", num);
    } else {
        printf("\n%d is not an Armstrong number.\n", num);
    }

    return 0;
}
