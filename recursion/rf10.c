// WAP in C using Recursive function to sum of half of array element.
// i/p: int a[6]={10,20,30,44,55,66};
// o/p: sum = 60
// int rec_fun_sum_arr( int *p, int ele );

#include<stdio.h>
int rec_fun_sum_arr(int *p,int n)
{
	static int i = 0;
	static int sum = 0;
	
	sum = sum + p[i];

	i++;
	if(i<n/2)
		rec_fun_sum_arr(p,n);
	
	return sum;
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

	int sum = rec_fun_sum_arr(a,n);
	printf("Sum of half elements is :%d \n",sum);
}
