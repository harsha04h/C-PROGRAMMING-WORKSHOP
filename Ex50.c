#include<stdio.h>
int main()
{
	int n;
	char ch[20];
	for(n=0;n<5;n++)
	{
		scanf("%c",&ch[n]);
	}
	ch[5]='\0';
	printf("\n String: %s\n",ch);
	return 1;
}
