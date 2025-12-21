// WAP in C to product of digit of all array elements.
// i/p: int a[5]={11,202,234,456,90};
// o/p: int a[5]={1, 0, 24, 120, 0};

#include<stdio.h>
void print_array(int *,int);
void digit_product(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int product = 1;
		int num = arr[i];
		for(;num;num= num/10)
		{
			int r = num%10;
			product = product * r;
		}
		arr[i] = product;
	}

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

	digit_product(arr,n);
	
	printf("New Array :");
	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
