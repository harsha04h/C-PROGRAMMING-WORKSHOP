/*#include <stdio.h>

struct BitField {
    unsigned int x : 8; // Declare an 8-bit field for `x`
};

int main() {
    struct BitField bf; // Create an instance of the structure

    //printf("Enter an 8-bit integer: ");
    //scanf("%u", bf.x); // Input a value for the 8-bit field
	bf.x=9;
	
    printf("Inputted Value:\n");
    printf("x = %u\n", bf.x); // Print the value

    return 0;
}*/


#include <stdio.h>

struct BitField {
    unsigned int x : 8; // Declare an 8-bit field for `x`
};

int main() {
    struct BitField bf; // Create an instance of the structure
    unsigned int temp;  // Temporary variable for input

    printf("Enter an 8-bit integer: ");
    scanf("%u", &temp); // Input value into the temporary variable

    // Store only the lower 8 bits in the bit field
    bf.x = temp & 0xFF; // Mask to ensure only 8 bits are used
	// The bitwise AND operator & is used to mask (keep) certain bits and discard the others.
	
    printf("Inputted Value:\n");
    printf("x = %u\n", bf.x); // Print the value stored in the bit field

    return 0;
}

