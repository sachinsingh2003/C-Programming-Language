// WAP in C to delete duplicate elements from array .
// i/p: a[10]={3,3,2,4,4,1,2,3,7,9}
// o/p: a[10]={3,2,4,1,7,9};

#include<stdio.h>
int delete_duplicate(int *,int);
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
	
	printf("Array : ");
	print_array(arr,n);
	n = delete_duplicate(arr,n);
	printf("New Array : ");
	print_array(arr,n);
}
void print_array(const int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int delete_duplicate(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				for(int k=j;k<n-1;k++)
					a[k] = a[k+1];
				n--;
				j--;
		
			}
		}
	}
	return n;
}
