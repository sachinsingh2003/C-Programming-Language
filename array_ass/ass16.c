// WAP in C to swap(using bitwise) )th ele with last ele in array using 2 pointer wihtout any loop-----

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("\n");

	int arr[n],*left,*right;
	left = arr;
	right = arr+n-1;

	printf("Enter the array : \n");
	for(int i=0;i<n;i++)
		scanf("%d",left+i);

	printf("Original array: ");
	for(int i=0;i<n;i++)
		printf("%d ",*(left+i));
	printf("\n");

	*left ^= *right;
	*right ^= *left;
	*left ^= *right;


	printf("new array: ");
	for(int i=0;i<n;i++)
		printf("%d ",*(left+i));
	printf("\n");
}
