// WAP in C to store 1st 7 prime number in array .
// i/p: int a[7];
// o/p: int a[7]={2,3,5,7,11,13,17};

#include<stdio.h>
void print_array(int *,int);
void store_prime(int *arr,int n)
{
	int count=0,k=0;
	for(int i=2;;i++)
	{
		int j=2;
		while(j<i)
		{
			if(i%j==0)
				break;
			j++;
		}
		if(i==j)
		{	
			arr[k++] = i;
			count++;
			if(count==n)
				break;
		}		
	}
}
void main()
{
	int n;
	printf("Enter the size of array :\n");
	scanf("%d",&n);

	int s[n];
//	printf("Enter the elements : \n");
//	for(int i=0;i<n;i++)
//	scanf("%d",&s[i]);

//	printf("Original Array :");
//	print_array(s,n);

	store_prime(s,n);	
	
	printf("New Array :");
	print_array(s,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
