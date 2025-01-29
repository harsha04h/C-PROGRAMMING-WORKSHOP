#include<stdio.h>
int fPrime(int);
void ffact(int);
void ffact(int m)
{
	int i,fact=1;
	i=m;
	while(i>0)
	{
		fact=fact*i--;
	}
	printf("\n\nFactorial of %d is %d",m,fact);
}

int fPrime(int m)
{
	int i,rem;
	i=2;
	while(i<m)
	{
		rem=m%i;
		if(rem==0)
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	int choice,n,r;
	while(1)
	{
		printf("\nEnter 1 for Factorial:");
		printf("\nEnter 2 for Prime Check:");
		printf("\nEnter 3 for Exit:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter Number:");
				scanf("%d",&n);
				ffact(n);
				break;
			case 2:
				printf("\nEnter Number:");
				scanf("%d",&n);
				r=fPrime(n);
				if(r==0)
					printf("\nNot Prime:\n");
				else
					printf("\nPrime:\n");
				break;
			case 3:
				exit(0);
			default:
				printf("\nWRONG INPUT\n");
		}
	}
	return 0;
}
