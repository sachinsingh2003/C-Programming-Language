// WAP in C to delete 0th bit of all array elements.....

#include<stdio.h>

int deleteZeroBit(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		*(a+i) = *(a+i)>>1;
	}
}

void main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int a[n];
	printf("Enter the element: \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

	
	printf("Original Array :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	deleteZeroBit(a,n);

	printf("New Array :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
