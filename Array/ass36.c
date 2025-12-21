// WAP in C to print and count strong in array .
// i/p: int a[7]={2,4,2,6,145,28,1};
// o/p: 2 2 145 1 ,count= 4

#include<stdio.h>
void print_array(int *,int);
void strong_count(int *arr,int n)
{
	int count=0,summm,sum;
	for(int i=0;i<n;i++)
	{
		int r,summm=0;
		int num = arr[i];
		while(num)
		{
			r = num %10;
			num = num/10;
			int j=1;
			int sum=1;
			while(j<=r)
			{
				sum = sum * j;
				j++;	
			}			
		
		summm = summm + sum; 
		} 
		if(summm==arr[i])
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

	strong_count(arr,n);
	
//	printf("New Array :");
//	print_array(arr,n);
}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
