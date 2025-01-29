#include <stdio.h>
#include <stdlib.h>
// Function to implement Bubble Sort
void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
	{
        // Last i elements are already sorted
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) 
{
    int i;
	for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// Function to take input in array
void inputArray(int arr[], int n) 
{
    int i;
	for (i = 0; i < n; i++) 
	{
        printf("Enter number::");
		scanf("%d", &arr[i]);
    }    
}

int main() {
    /*int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);*/
	
	int arr[20];
	int n;
	printf("\n Enter how many integers::");
	scanf("%d",&n);
	
    inputArray(arr,n);
	
    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
