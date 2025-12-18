// WAP in C to left rotate array 1 times in same array.
// i/p: int a[7]={11,21,31,41,51,61,71};
// o/p: int a[7]={21,31,41,51,61,71,11};

#include<stdio.h>
void print_array(int *,int);
void left_rotate(int *arr,int n,int times)
{
	int i,j;
	for(i=0;i<times;i++)
	{
	int temp = arr[0];
		for(j=0;j<n-1;j++)
		{
			arr[j] = arr[j+1];
		}
	arr[n-1] = temp ;
	}
	
	
		
}
void main()
{
	int n;
	printf("Enter the size:\n");
	scanf("%d",&n);

	int arr[n],times;
	printf("Enter the elements \n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Enter number of time array rotate : ");
	scanf("%d",&times);

	printf("Original Array :");
	print_array(arr,n);

	left_rotate(arr,n,times);

	printf("New Array :");
	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
