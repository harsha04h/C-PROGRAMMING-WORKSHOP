#include <stdio.h>
int main() 
{
	int i;
	int arr[] = {10, 20, 30, 40, 50}; // Declaration and initialization
	printf("Elements of the array:\n");
	for (i = 0; i < 5; i++) 
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
