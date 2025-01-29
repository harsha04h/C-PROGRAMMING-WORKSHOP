#include <stdio.h>
#include <stdlib.h>

struct Example 
{
    int a;
    char b;
    double c;
};

int main() 
{
    printf("Size of structure: %zu bytes\n", sizeof(struct Example));

    struct Example* ptr = (struct Example*)malloc(sizeof(struct Example));
    if (ptr == NULL) 
	{
        printf("Memory allocation failed\n");
        return 1;
    }

    ptr->a = 10;
    ptr->b = 'X';
    ptr->c = 3.14;

    printf("Values: a = %d, b = %c, c = %lf\n", ptr->a, ptr->b, ptr->c);

    free(ptr);
    return 0;
}
/*
Memory Allocation:
Size of Members: Each member of the structure takes up space equal to its data type.
int a: 4 bytes (typically, on most systems)
char b: 1 byte
double c: 8 bytes

Padding and Alignment:
The compiler aligns members to memory boundaries (e.g., 4-byte or 8-byte boundaries for performance reasons).
Padding is added between members if needed.
For the above example:

int a starts at offset 0 (aligned to 4 bytes).
char b is placed at offset 4, but to align double c (8 bytes), padding (3 bytes) is added after b.
double c starts at offset 8.

Total size: 4 (a) + 1 (b) + 3 (padding) + 8 (c) = 16 bytes.

Overall Size:
The total size of the structure is rounded up to the nearest multiple of the largest alignment requirement (8 bytes in this case).

The %zu format specifier is used in C to print values of type size_t, which is an unsigned integer type returned by the sizeof operator.

Why %zu?
The size_t type is platform-dependent, meaning its size may vary (e.g., 32-bit systems use 4 bytes, while 64-bit systems use 8 bytes).
%zu ensures that the output correctly matches the size_t type across platforms, avoiding warnings or errors.
*/
