#include <stdio.h> // Include for input/output functions

// Define the Address structure
struct Address 
{
    char city[50]; // City name
    int pin;       // PIN code
};

// Define the Employee structure with a nested Address structure
struct Employee 
{
    int id;               // Employee ID
    char name[50];        // Employee name
    struct Address addr;  // Nested structure for address
};

int main() 
{
    int n,i;

    // Ask the user how many employees they want to enter
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures to store employee details
    struct Employee employees[n];

    // Input employee details for each employee
    for (i = 0; i < n; i++) 
	{
        printf("\n--- Enter details for Employee %d ---\n", i + 1);

        // User input for Employee ID
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);

        // User input for Employee Name
        printf("Enter Employee Name: ");
        scanf(" %49[^\n]", employees[i].name);  // Use %[^\n] to allow spaces in name

        // User input for City
        printf("Enter City: ");
        scanf(" %49[^\n]", employees[i].addr.city);  // Use %[^\n] to allow spaces in city name

        // User input for PIN Code
        printf("Enter PIN Code: ");
        scanf("%d", &employees[i].addr.pin);
    }

    // Output the details for all employees
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) 
	{
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("City: %s\n", employees[i].addr.city);
        printf("PIN: %d\n", employees[i].addr.pin);
    }

    // Display the size of the structure (per employee)
    printf("Size of structure (per employee): %zu bytes\n", sizeof(struct Employee));

    return 0; // End of the program
}
