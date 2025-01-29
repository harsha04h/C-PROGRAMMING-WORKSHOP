#include <stdio.h>
int main() 
{
	int arr[15];
	int n,i,s_v;
	printf("\nEnter how many elements (Size)::");
	scanf("%d",&n);
	printf("Accessing array elements (Input):\n");
	for (i = 0; i < n; i++) // INPUT LOOP USING POINTER
	{
		printf("Enter %d Element ::", i+1);
		scanf("%d",(arr+i));
	}
	printf("\nEnter element to search::");
	scanf("%d",&s_v);
	for (i = 0; i < n; i++) // SEARCHING LOOP
	{
		if(*(arr+i)==s_v)
		{
			break;
		}
	}
	if(i==n)
		printf("\nUnsuccesful Search:\n");
	else
		printf("\nElement %d is at %d position in Array\n",s_v,i+1);
	return 0;
}
