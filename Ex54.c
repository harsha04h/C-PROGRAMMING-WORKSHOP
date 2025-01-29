#include <stdio.h>

void printValue(void* ptr, char type) 
{
    switch (type) {
        case 'i': // Integer
            printf("Integer: %d\n", *(int*)ptr);
            break;
        case 'f': // Float
            printf("Float: %.2f\n", *(float*)ptr);
            break;
        case 'c': // Character
            printf("Character: %c\n", *(char*)ptr);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main() {
    int a = 42;
    float b = 3.14;
    char c = 'G';

    void* ptr;

    // Pointing to an integer
    ptr = &a;
    printValue(ptr, 'i');

    // Pointing to a float
    ptr = &b;
    printValue(ptr, 'f');

    // Pointing to a character
    ptr = &c;
    printValue(ptr, 'c');

    return 0;
}
