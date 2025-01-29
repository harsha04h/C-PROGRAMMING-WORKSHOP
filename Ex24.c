#include<stdio.h>
void fun(int);
int main()
{
	fun(1);
	fun(2);
	fun(3);
	return 1;
}
void fun(int m)
{
	static int z;
	auto int x;
	printf("\n\nFunction called %d times",++z);
	printf("\nValue of formal argument is %d",m);
	x=m+10;
	printf("\nValue of local(auto) argument is %d\n",x);
}
