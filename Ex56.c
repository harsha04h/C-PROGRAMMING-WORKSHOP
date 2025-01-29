#include <stdio.h>
int main() 
{
    int num;
    int *ptr;    // Pointer to the integer 'num'
    int **dptr; // Double pointer pointing to 'ptr'
	int ***tptr;
	int ****qptr;
	num=20;
	ptr=&num;
	dptr=&ptr;
	tptr=&dptr;
	qptr=&tptr;
    printf("Output::\n");
    printf("Value of num: %d\n", num);
    /*printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value of dptr: %p\n", ptr);
    printf("Value of tptr: %p\n", ptr);
    printf("Value at *dptr: %p\n", *dptr);*/
    printf("Value at **dptr: %d\n", **dptr);
	/*printf("Value at *tptr: %p\n", *tptr);
    printf("Value at **tptr: %d\n", **tptr);*/
    printf("Value at ***tptr: %d\n", ***tptr);
	printf("Value at ****qptr: %d\n\n", ****qptr);
	return 0;
}
