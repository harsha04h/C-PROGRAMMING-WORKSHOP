//Matrix Upper Diagonal Sum
#include<stdio.h>
void f_matrix_uds(int [][],int, int);
void f_input(int [][],int, int);
void f_output(int [][],int, int);
int sum;
int main()
{
	int A[3][3];
	int r1,c1;
	printf("\nEnter row and column for square Matrix::");
	scanf("%d%d",&r1,&c1);
	f_input(A,r1,c1);
	f_matrix_uds(A,r1,c1);
	printf("\nMain Matrix::\n");
	f_output(A,r1,c1);
	printf("\n\nSum of diagonals is %d\n",sum);
	
	return 0;
}

void f_matrix_uds(int A[3][3],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
				sum=sum+A[i][j];
		}
	}
}

void f_input(int D[3][3],int x, int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("\n Enter Value::");
			scanf("%d",&D[i][j]);
		}
	}
}

void f_output(int D[3][3],int x, int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%5d",D[i][j]);
		}
		printf("\n");
	}
}
