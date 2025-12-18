// WAP in C to store factorial of array in another array.
// i/p: int a[4]={ 4, 5, 6, 4};
// o/p: int b[4]={24,120,720,24}

#include<stdio.h>
void print_array(int *,int);
void digit_fact(int *arr,int *b,int n)
{
	for(int i=0;i<n;i++)
	{
		int fact = 1;
		int num = arr[i];
		for(int j=1;j<=num;j++)
		{
			fact = fact * j;
		}
		b[i] = fact;
	}

}
void main()
{
	int n;
	printf("Enter the size:\n");
	scanf("%d",&n);
	
	int arr[n],b[n];
	printf("Enter the elements \n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("Original Array :");
	print_array(arr,n);

	digit_fact(arr,b,n);
	
	printf("New Array :");
	print_array(b,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
