#include <stdio.h>
#include <stdlib.h>
struct Student 
{
	int id;
	char name[50];
	float marks;
}; /*The total size of the structure will be:

4 (id) + 50 (name) + 2 (padding) + 4 (marks) = 60 bytes.*/
int main() 
{
	struct Student s1 = {1, "Alice", 95.5};
	printf("Size of structure: %zu bytes\n", sizeof(struct Student));
	printf("ID: %d\n", s1.id);
	printf("Name: %s\n", s1.name);
	printf("Marks: %.2f\n", s1.marks);
	return 0;
}
