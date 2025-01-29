#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr,i;
    ptr = (int*)calloc(5, sizeof(int));  // Allocates memory for 5 integers and initializes them to 0
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Using the allocated memory
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // All values should be 0
    }
	printf("\n");
    // Free the allocated memory
    free(ptr);
    return 0;
}
