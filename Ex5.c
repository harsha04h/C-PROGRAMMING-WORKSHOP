#include <stdio.h>

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary
    
    // AND operator
    printf("a & b = %d\n", a & b);  // Output: 1 (0001 in binary)
    
    // OR operator
    printf("a | b = %d\n", a | b);  // Output: 7 (0111 in binary)
    
    // XOR operator
    printf("a ^ b = %d\n", a ^ b);  // Output: 6 (0110 in binary)
    
    // NOT operator
    printf("~a = %d\n", ~a);  // Output: -6 (in 2's complement representation)
    
    // Left Shift operator
    printf("a << 1 = %d\n", a << 1);  // Output: 10 (1010 in binary)
    
    // Right Shift operator
    printf("a >> 1 = %d\n", a >> 1);  // Output: 2 (0010 in binary)
    
    return 0;
}
