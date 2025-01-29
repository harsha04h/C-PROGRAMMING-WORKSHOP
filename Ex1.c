#include<stdio.h>
void main()
{
	int N1,n2,Result;
	printf("Enter two numbers (integers):");
	scanf("%d%d",&N1,&n2);
	Result=N1+n2;
	printf("Result of %d + %d = %d\n\n",N1,n2,Result);
	printf("Hello\rWorld\n\n");
	printf("\x48\x65\x6C\x6C\x6F\n");
}