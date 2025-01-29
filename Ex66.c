#include <stdio.h> // Include for input/output functions

// Define the Address structure
struct Address {
    char city[50]; // City name
    int pin;       // PIN code
};

// Define the Employee structure with a nested Address structure
struct Employee {
    int id;               // Employee ID
    char name[50];        // Employee name
    struct Address addr;  // Nested structure for address
};

int main() {
    struct Employee e1;

    // User input for Employee ID
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    // User input for Employee Name
    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", e1.name);  // Use %[^\n] to allow spaces in name

    // User input for City
    printf("Enter City: ");
    scanf(" %49[^\n]", e1.addr.city);  // Use %[^\n] to allow spaces in city name

    // User input for PIN Code
    printf("Enter PIN Code: ");
    scanf("%d", &e1.addr.pin);

    // Output the entered Employee details
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("City: %s\n", e1.addr.city);
    printf("PIN: %d\n", e1.addr.pin);

    // Display the size of the structure
    printf("Size of structure: %zu bytes\n", sizeof(struct Employee));

    return 0; // End of the program
}
