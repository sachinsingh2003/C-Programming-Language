// WAP in C to shift all odd elements to right side in same array.
// i/p: int a[7]={11,22,22,44,55,33,88};
// o/p: int a[7]={22,22,44,88,11,55,33}

#include<stdio.h>
void print_array(int *,int);
void shift_neg_ele(int *arr,int n)
{
//////////// Using 2nd array ///////////
	
	int temp[n];
	int index = 0;

	for(int i=0;i<n;i++)
	{	
		if(arr[i]%2 == 0)
			temp[index++]= arr[i];
	}

	for(int i=0;i<n;i++)
	{	
		if(arr[i] %2 != 0)
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
