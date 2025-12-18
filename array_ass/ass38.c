// WAP in C to right rotate array 1 times in same array.
// i/p: int a[7]={11,21,31,41,51,61,71};
// o/p: int a[7]={71,11,21,31,41,51,61};

#include<stdio.h>
void print_array(int *,int);
void right_rotate(int *arr,int n)
{
	int j;
	int temp = arr[n-1];
	for(j=n-1;j>0;j--)
	{
		arr[j] = arr[j-1];
	}
	arr[0] = temp;
	
		
}
void main()
{
	int n;
	printf("Enter the size:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the elements \n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Original Array :");
	print_array(arr,n);

	right_rotate(arr,n);

	printf("New Array :");
	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
