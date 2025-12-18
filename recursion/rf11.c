// WAP in C using Recursive function to reverse array elements and print array in main .
// i/p: int a[6]={11,22,33,44,55,66};
// o/p: a[6]={66,55,44,33,22,11};
// void rec_fun_rev_arr( int *p, int *q );

#include<stdio.h>
void print_array(int*,int);
void rec_fun_rev_arr(int *p,int *q)
{
	if(p<q)
	{
		int temp = *p;
		*p = *q;
		*q = temp;

		rec_fun_rev_arr(p+1,q-1);	
	}
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

	print_array(a,n);

	rec_fun_rev_arr(a,a+(n-1));

	print_array(a,n);
}
void print_array(int *arr,int n)
{

	printf("Array :");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
