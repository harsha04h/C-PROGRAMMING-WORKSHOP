#include <stdio.h>
#include <stdlib.h>

// Define the structure with packed attribute
struct __attribute__((packed)) Packed {
    char a;  // 1 byte
    int b;   // 4 bytes
};

int main() {
    // Declare and initialize the structure
    struct Packed s1 = {'A', 9};

    // Print the size of the structure
    printf("Size of structure: %zu bytes\n", sizeof(struct Packed));

    // Print the values of the structure members
    printf("ID: %c\n", s1.a);
    printf("Name: %d\n", s1.b);

    return 0;
}
