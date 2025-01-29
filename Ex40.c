#include <stdio.h> //OK
int c=0;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{
	//static int c;
	if (n == 1) 
	{
		++c;
		printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	++c;
	printf("Move disk %d from %c to %c\n", n, from_rod, to_rod);
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main() 
{
	int n = 3; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are the rod names
	printf("\n\nTotal Steps= %d\n",c);
	return 0;
}
