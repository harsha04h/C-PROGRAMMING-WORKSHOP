#include <stdio.h>
#include <string.h> // Include for strcpy function

// Define the union Data
union Data {
    int i;
    float f;
    char str[20]; // String to hold characters
};

int main() {
    union Data data; // Declare a variable of type union Data
    
    // User input for integer
    printf("Enter an integer: ");
    scanf("%d", &data.i);
    printf("Integer: %d\n", data.i); // Output integer
    
    // User input for float
    printf("Enter a float: ");
    scanf("%f", &data.f);
    printf("Float: %.2f\n", data.f); // Output float
    
    // User input for string
    printf("Enter a string: ");
    scanf(" %19[^\n]", data.str); // Use %[^\n] to handle spaces in string
    printf("String: %s\n", data.str); // Output string

    return 0; // End of the program
}
