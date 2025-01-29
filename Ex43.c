//unformated IO
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	char str[50];
		
	puts("\nEnter a character :");
	ch=getch();
	puts("\nValue entered is :: ");
	putch(ch);
	
	puts("\nEnter a character :");
	ch=getche();
	puts("\nValue entered is :: ");
	putch(ch);
	
	puts("\nEnter a character :");
	ch=getchar();
	puts("\nValue entered is :: ");
	putchar(ch);
	
	fflush(stdin);
	
	puts("\nEnter a string :");
	gets(str);
	puts("\nValue entered is :: ");
	puts(str);
	
	puts("\nEnd");
	puts("Program");
	return 1;
}
