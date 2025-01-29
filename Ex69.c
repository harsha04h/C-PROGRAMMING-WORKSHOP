#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr,i;
    ptr = (int*)malloc(5 * sizeof(int));  // Allocates memory for 5 integers
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Using the allocated memory
    for (i = 0; i < 5; i++) {
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
