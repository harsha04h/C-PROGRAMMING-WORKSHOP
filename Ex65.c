#include <stdio.h> // Include for input/output functions

// Define the Address structure with packed attribute
struct __attribute__((packed)) Address {
    char city[50]; // City name
    int pin;       // PIN code
};

// Define the Employee structure with a nested Address structure, also packed
struct __attribute__((packed)) Employee {
    int id;               // Employee ID
    char name[50];        // Employee name
    struct Address addr;  // Nested structure for address
};
//4 (id) + 50 (name) + 50 (city) + 4 (pin) = 108 bytes
int main() {
    // Initialize an Employee structure with nested Address
    struct Employee e1 = {1, "John", {"New York", 12345}};

    // Print the size of the Employee structure
    printf("Size of structure: %zu bytes\n", sizeof(struct Employee));

    // Print Employee details
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("City: %s\n", e1.addr.city);
    printf("PIN: %d\n", e1.addr.pin);

    return 0; // End of the program
}
