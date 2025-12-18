// WAP in C to shift all -ve elements to right side in same array.
// i/p: int a[7]={-1,22,3,-4,-8,33,77};
// o/p: int a[7]={22,3,33,77,-1,-4,-8,};

#include<stdio.h>
void print_array(int *,int);
void shift_neg_ele(int *arr,int n)
{
	int temp[n];
	int index = 0;

	for(int i=0;i<n;i++)
	{	
		if(arr[i]>=0)
			temp[index++]= arr[i];
	}

	for(int i=0;i<n;i++)
	{	
		if(arr[i]<0)
			temp[index++] = arr[i];
	}

	for(int i=0;i<n;i++)
		arr[i] = temp[i];

	
		
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

	printf("Original Array :");
	print_array(arr,n);

	shift_neg_ele(arr,n);

	printf("New Array :");
	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
