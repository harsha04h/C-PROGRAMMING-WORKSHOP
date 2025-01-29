#include<stdio.h>
int main()
{
	int Num,i,rem,flag=0;
	printf("Enter a number:");
	scanf("%d",&Num);
	i=2;
	while(i<Num)
	{
		rem=Num%i;
		if(rem==0)
		{
			flag=1;
			break;
		}
		i+=1;
	}
	if(flag==0)
	{
		printf("its a Prime Number\n");
	}
	else
	{
		printf("its NOT a Prime Number\n");
	}
	return 0;
}
