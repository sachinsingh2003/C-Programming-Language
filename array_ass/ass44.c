// WAP in C to shift all 0 to left side in same array.
// i/p: int a[7]={11,0,0,44,0,33,0};
// o/p: int a[7]={0,0,0,0,11,44,33};

#include<stdio.h>
void print_array(int *,int);
void shift_zero(int *arr,int n)
{
/*
///////////////////  without using another array ///////////////

	int count = n-1;
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i] != 0)
			arr[count--]= arr[i];
	}
	
	while(count>=0)
		arr[count--] = 0;

*/

////////////////////// uing another array////////////////////
	
	int temp[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			temp[j++] = 0;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i] !=0)
			temp[j++] = arr[i];
	}

	for(int i=0;i<n;i++)
	{
		arr[i] = temp[i];
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

	printf("Original Array :");
	print_array(arr,n);

	shift_zero(arr,n);

	printf("New Array :");
	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
