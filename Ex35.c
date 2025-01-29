#include<stdio.h>
void f_matrix_add(int [][],int [][],int, int);
void f_input(int [][],int, int);
void f_output(int [][],int, int);
int main()
{
	int A[3][3],B[3][3];
	int r1,c1,r2,c2;
	int i,j;
	printf("\nEnter row and column for first Matrix::");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter row and column for Second Matrix::");
	scanf("%d%d",&r2,&c2);
	if (r1!=r2 || c1!=c2)
	{
		printf("\n Matrix Addition is not Possible::\n");
		exit(0);
	}
	printf("\nEnter elements of First Matrix::\n");
	f_input(A,r1,c1);
	printf("\nEnter elements of Second Matrix::\n");
	f_input(B,r2,c2);
	f_matrix_add(A,B,r1,c1);
	printf("\nElements of First Matrix are::\n");
	f_output(A,r1,c1);
	printf("\nElements of Second Matrix are::\n");
	f_output(B,r1,c1);
	
	return 0;
}

void f_matrix_add(int A[3][3],int B[3][3],int m, int n)
{
	int i,j;
	int C[3][3];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("\nElements of Resultant Matrix are::\n");
	f_output(C,m,n);
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
