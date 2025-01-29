#include<stdio.h>
int main()
{
	int Num,i;
	printf("Enter Number:");
	scanf("%d",&Num);
	printf("Table for %d:\n",Num);
	i=1;
	while(i<=10)
	{
		printf("%d * %d = %d\n",Num,i,(Num*i));
		i++;
	}
}
