// WAP in C to count all duplicate elements from array.
// i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
// o/p: 3 ->3 times ,2-> 2 times , 4-> 3 times

#include<stdio.h>
void print_array(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void count_duplicate(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int count=1;
		if(arr[i] == -1)
			continue;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				arr[j]  = -1;	
			}
		}
		if(count >1)
			printf("%d --> %d time\n",arr[i],count);
	}

}
void main()
{
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the elements : \n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

	printf("Original Array :");
	print_array(arr,n);
	
	printf("Duplicate Count: \n");
	count_duplicate(arr,n);
	
	
}
