#include<stdio.h>
int main()
{
	int row,i,j,k;
	printf("Enter number of rows::");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=(row-i);j++)
		{
			printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 1;
}
