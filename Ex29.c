#include<stdio.h>
void ffact(int *,int *);
int main()
{
	int Num,fact=1;
	printf("Entter a number::");
	scanf("%d",&Num);
	ffact(&Num,&fact);
	printf("Factorial of %d is %d\n",Num,fact);
	return 1;
}

void ffact(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	while (temp>=1)
	{
		*p2=*p2 * temp;
		temp--;
	}
}
