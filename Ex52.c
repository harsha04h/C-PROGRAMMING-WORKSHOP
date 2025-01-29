#include <stdio.h>

int main() 
{
    char buffer[100];        // Buffer for sprintf
    int age, extractedAge;   // Variable for sscanf
    float height, extractedHeight;
    char name[50], extractedName[50];

    // Formatting data using sprintf
    age = 25;
    height = 5.9;
    sprintf(buffer, "Name: John, Age: %d, Height: %.1f", age, height);

    // Display the formatted string
    printf("Formatted string (using sprintf):\n%s\n", buffer);

    // Extracting data using sscanf
    sscanf(buffer, "Name: %[^,], Age: %d, Height: %f", extractedName, &extractedAge, &extractedHeight);

    // Display the extracted values
    printf("\nExtracted values (using sscanf):\n");
    printf("Name: %s\n", extractedName);
    printf("Age: %d\n", extractedAge);
    printf("Height: %.1f\n", extractedHeight);

    return 0;
}
