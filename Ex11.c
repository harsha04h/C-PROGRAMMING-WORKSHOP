#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else if (num == 2 || num == 3) {
        isPrime = 1; // 2 and 3 are prime
    } else if (num % 2 == 0 || num % 3 == 0) {
        isPrime = 0; // Exclude multiples of 2 and 3
    } else {
        for (i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
