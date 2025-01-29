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

    // Print values
    for (i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);
	printf("\n");
    // Do not use ptr after free
    printf("After free function ::: %d\n", ptr[0]); // This will result in undefined behavior

    return 0;
}
