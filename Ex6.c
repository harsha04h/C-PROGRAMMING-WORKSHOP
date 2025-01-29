#include <stdio.h>

int main() {
    int num;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &num);
    //getchar();  // Consume the newline character left by scanf
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("You entered number: %d and character: %c\n", num, ch);
    return 0;
}
