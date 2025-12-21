// Reverse an array using dynamic memory 
// • Input N 
// • Allocate memory 
// • Reverse array elements 
// • Print reversed array

#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int n)
{
	int *left = arr;
	int *right = arr+n-1;

	while(left<right)
	{
		int temp = *left;
			*left = *right;
			*right = temp;

		left++;
		right--;
	}

}
void main()
{
	int n;
	printf("Enter number of ele:\n");
	scanf("%d",&n);

	int *arr;
	arr = calloc(n,sizeof(int));
	
	printf("Enter the element of array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

	printf("Original Array: ");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);	 
	
	reverse(arr,n);

	printf("\nReverse of array:");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);	 
	printf("\n");
} 
