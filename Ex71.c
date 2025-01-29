#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr,i;
    ptr = (int*)malloc(3 * sizeof(int));  // Allocates memory for 3 integers

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize values
    for (i = 0; i < 3; i++) {
        ptr[i] = i + 1;
    }

    // Resize the allocated memory to hold 5 integers
    ptr = (int*)realloc(ptr, 5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Assign new values to the resized memory
    for (i = 3; i < 5; i++) {
        ptr[i] = i + 1;
    }

    // Print values
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
	printf("\n");
    // Free the allocated memory
    free(ptr);
    return 0;
}
