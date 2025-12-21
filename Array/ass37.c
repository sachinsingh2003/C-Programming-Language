// WAP in C to print and count armstrong in array .
// i/p: int a[7]={22,4,21,6,153,28,11};
// o/p: 4 6 153 ,count= 3

#include<stdio.h>
void print_array(int *,int);
void armstrong_count(int *arr,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		int pow=0;
		while(num)
		{
			pow++;
			num = num/10;
		}
		num = arr[i];
		int summm=0;
		while(num)
		{
			int r = num%10;
			int sum =1;
			for(int j=0;j<pow;j++)
			{
				sum = sum * r;
			
			}
			summm = summm + sum;
		num = num/10;
		}
		if(summm==arr[i])
		{
			count++;
			printf("%d ",arr[i]);
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

	armstrong_count(arr,n);

	//	printf("New Array :");
	//	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
