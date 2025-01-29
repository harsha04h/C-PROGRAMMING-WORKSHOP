#include<stdio.h>
int main()
{
	int N1,N2,Result,flag=0;
	char op;
	printf("Enter operator (+,-,*,/,%):");
	scanf("%c",&op);
	printf("Enter Two Numbers::");
	scanf("%d%d",&N1,&N2);
	switch(op)
	{
		case '+':
			Result=N1+N2;
			break;
		case '-':
			Result=N1-N2;
			break;
		case '*':
			Result=N1*N2;
			break;
		case '/':
			Result=N1/N2;
			break;
		case '%':
			Result=N1%N2;
			break;
		default:
			flag=1;
			printf("Wrong Operator Inputed:\n");
	}
	if(flag==0)
		printf("Answer::: %d %c %d = %d\n",N1,op,N2,Result);
}
