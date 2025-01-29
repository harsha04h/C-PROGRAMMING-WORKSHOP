// Binary Search
#include <stdio.h>
int main() 
{
	int arr[15];
	int n,i,s_v,pos=-1;
	int low,high,mid;
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
	/*for (i = 0; i < n; i++) // SEARCHING LOOP (Linear Search)
	{
		if(*(arr+i)==s_v)
		{
			break;
		}
	}*/
	// Binary Search Loop
	low=0;
	high=n;
	while(low<high)
	{
		if(arr[low]==s_v)
		{
			pos=low+1;
			break;
		}
		else if(arr[high]==s_v)
		{
			pos=high+1;
			break;
		}
		else
		{
			mid=(low+high)/2;
			if(arr[mid]==s_v)
			{
				pos=mid+1;
				break;
			}
		}
		if(arr[mid]<s_v)
			low=mid+1;
		else
			high=mid-1;
	}
	if(pos==-1)
		printf("\nUnsuccesful Search:\n");
	else
		printf("\nElement %d is at %d position in Array\n",s_v,pos);
	return 0;
}
