//Matrix Multiplication
#include<stdio.h>
void f_matrix_mul(int [][],int [][],int [][],int, int, int, int);
void f_input(int [][],int, int);
void f_output(int [][],int, int);
int main()
{
	int A[3][3],B[3][3],C[3][3];
	int r1,c1,r2,c2;
	printf("\nEnter row and column for first Matrix::");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter row and column for Second Matrix::");
	scanf("%d%d",&r2,&c2);
	if (c1!=r2)
	{
		printf("\n Matrix Multiplication is not Possible::\n");
		exit(0);
	}
	f_input(A,r1,c1);
	f_input(B,r2,c2);
	f_matrix_mul(A,B,C,r1,c1,r2,c2);
	f_output(A,r1,c1);
	f_output(B,r1,c1);
	f_output(C,r1,c1);
	return 0;
}

void f_matrix_mul(int A[3][3],int B[3][3],int C[3][3],int m1, int n1, int m2, int n2)
{
	int i,j,k;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			C[i][j]=0;
			for(k=0;k<n1;k++)
				C[i][j]=C[i][j] + A[i][k] * B[k][j];
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
