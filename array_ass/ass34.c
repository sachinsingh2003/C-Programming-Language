// WAP in C to print and count prime in array .
// i/p: int a[7]={3,4,5,6,7,8,9};
// o/p: 3 5 7 , count= 3

#include<stdio.h>
void print_array(int *,int);
void prime_count(int *arr,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		int j=2;
		int num = arr[i];
		while(j<num)
		{
			if(num%j==0)
				break;
			j++;
		}
		if(num==j)
		{	
			printf("%d ",arr[i]);
			count++;
		}
	}
	printf("\n");
	printf("count = %d ",count);

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

	prime_count(arr,n);
	
//	printf("New Array :");
//	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
