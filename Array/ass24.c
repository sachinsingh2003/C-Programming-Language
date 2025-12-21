// WAP in C to delete 0th index element from array ...
// i/p: int a[5]={99,88,77,66,55}, in=0;
// o/p: int a[5]={88,77,66,55};

#include<stdio.h>
int delete_index(int *,int,int,int);
void print_array(const int *,int);
void main()
{
	int n,index1,index2;
	printf("Enter the size of array: \n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the array element :\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("Enter the index :\n");
	scanf("%d %d",&index1,&index2);
		
	print_array(arr,n);
//	delete_index(arr,n,index1,index2);
	n = delete_index(arr,n,index1,index2);
	print_array(arr,n);
}
void print_array(const int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int delete_index(int *a,int n,int index1,int index2)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(i != index1 && i != index2)
		{			a[j] = a[i];
			j++;
		}
	}
	return j;
}
