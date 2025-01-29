#include <stdio.h>
#include"Ex23.c"
int z;
void fun(void);
int main() 
{
	register int x ;
	register int y;
	x=12;
	y=13;
	printf("Register variable: i=%d\tj=%d\n", x,y);
	printf("External variable, before: z=%d\n", z);
	fun(); //in Ex23.c
	printf("\n\nExternal variable, after: z=%d\n", z);
	return 0;
}
