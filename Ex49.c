#include <stdio.h>

struct BitField 
{
    unsigned int x : 8;  // 8 bits for 'x'
    unsigned int y : 4;  // 4 bits for 'y'
};

int main() 
{
    struct BitField bf;

    bf.x = 255;  // Maximum value for 8 bits (11111111 in binary)
    bf.y = 15;   // Maximum value for 4 bits (1111 in binary)

    printf("x = %u, y = %u\n", bf.x, bf.y);

    // Attempting to assign values beyond the bit field width
    bf.x = 300;  // Will be truncated to fit 8 bits
    bf.y = 20;   // Will be truncated to fit 4 bits

    printf("After truncation: x = %u, y = %u\n", bf.x, bf.y);

    return 0;
}
