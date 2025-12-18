// WAP in C to delete odd element from array ...
// i/p: int a[6]={11,12,14,13,15,18};
// o/p: int a[6]={12,14,18};

#include<stdio.h>
int delete_odd(int *,int);
void print_array(const int *,int);
void main()
{
	int n;
	printf("Enter the size of array: \n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the array element :\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	
	print_array(arr,n);
	n = delete_odd(arr,n);
	print_array(arr,n);
}
void print_array(const int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int delete_odd(int *a,int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i] % 2==0)
		{	a[j] = a[i];
			j++;
		}
	}
	return j;
}
