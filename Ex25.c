#include <stdio.h>
int main() 
{
	int x = 10;
	{
		int x = 20; // Shadows the outer x
		printf("Inner block x: %d\n", x);
	}
	printf("Outer block x: %d\n", x);
	return 0;
}
