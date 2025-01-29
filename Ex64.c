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
//Total = 4 (id) + 50 (name) + 2 (padding) + 50 (city) + 4 (pin) + 2 (padding) = 112 bytes
int main() {
    // Initialize an Employee structure with nested Address
    struct Employee e1 = {1, "John", {"New York", 12345}};
	printf("Size of structure: %zu bytes\n", sizeof(struct Employee));
    // Print Employee details
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("City: %s\n", e1.addr.city);
    printf("PIN: %d\n", e1.addr.pin);

    return 0; // End of the program
}
