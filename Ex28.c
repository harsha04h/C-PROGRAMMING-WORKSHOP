#include<stdio.h>
int f_sqr(int);
inline int f_sqr(int m)
{
	return (m*m);	
}
int main()
{
	printf("Square value is %d\n",f_sqr(5));
	return 0;
}
