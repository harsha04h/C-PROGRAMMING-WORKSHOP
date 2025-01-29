//Matrix Transpose
#include<stdio.h>
void f_matrix_transpose(int [][],int [][],int, int);
void f_input(int [][],int, int);
void f_output(int [][],int, int);
int main()
{
	int A[3][3],B[3][3];
	int r1,c1;
	printf("\nEnter row and column for Matrix::");
	scanf("%d%d",&r1,&c1);
	f_input(A,r1,c1);
	f_matrix_transpose(A,B,r1,c1);
	printf("\nMain Matrix::\n");
	f_output(A,r1,c1);
	printf("\nTranspose Matrix::\n");
	f_output(B,c1,r1);
	
	return 0;
}

void f_matrix_transpose(int A[3][3],int B[3][3],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			B[j][i]=A[i][j];
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
