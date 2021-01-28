// C program for implementation of selection sort 
#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

//Print array
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

//Main function
int main() 
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	selectionSort(a, n); 
	printf("Sorted array: \n"); 
	printArray(a, n); 
	return 0; 
} 

