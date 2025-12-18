// WAP in C using Recursive function to count array element less than 99 more than 39.
// /p: int a[6]={71,53,145,21,49,153};
// o/p: count = 3

#include<stdio.h>
int rec_fun_count_arr(int *p,int n)
{
	static int i = 0;
	static int count = 0;
	if(p[i]>39 && p[i]<99)
	{
		count++;
	}
	i++;
	if(i<n)
		rec_fun_count_arr(p,n);
	
	return count;
}
void main()
{
	int n;
	printf("Enter the number of element :\n");
	scanf("%d",&n);

	int a[n];
	printf("Enter the element of array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Array :");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");

	int count = rec_fun_count_arr(a,n);
	printf("Element btw 99 and 39 are :%d \n",count);
}
