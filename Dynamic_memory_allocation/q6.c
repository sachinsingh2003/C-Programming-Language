// Merge two dynamically allocated arrays 
// • Input two arrays dynamically 
// • Merge them into new array 
// • Print merged array 

#include<stdio.h>
#include<stdlib.h>
void merge_array(int *arr,int n,int *arr2,int n2,int *merge)
{
	int index=0;
	while(*arr != 0 && *arr2 !=0)
	{
		merge[index++] = *arr++ ;
		merge[index++] = *arr2++ ;
	}
	while(*arr)
		merge[index++] = *arr++;

	while(*arr2)
		merge[index++] = *arr2++;

	

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

	printf("\nOriginal Array: ");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);	 
	
	int n2;
	printf("\nEnter number of ele for arr2:\n");
	scanf("%d",&n2);

	int *arr2;
	arr2 = calloc(n2,sizeof(int));
	
	printf("Enter the element for array2:\n");
	for(int i=0;i<n2;i++)
	scanf("%d",&arr2[i]);

	printf("\nOriginal Array2: ");
	for(int i=0;i<n2;i++)
	printf("%d ",arr2[i]);	 
	
	int *merge;
	merge = calloc(n+n2,sizeof(int));

	merge_array(arr,n,arr2,n2,merge);

	printf("\nMerge of array:");
	for(int i=0;i<n+n2;i++)
	printf("%d ",merge[i]);	 
	printf("\n");
} 
