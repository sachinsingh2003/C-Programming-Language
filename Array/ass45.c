// WAP in C to print 1st perfect and pos form array .
// i/p: int a[5]={2,4,6,28,6};
// o/p: num= 6, pos= 2

#include<stdio.h>
void print_array(int *,int);
void first_perfect(int *arr,int n,int *number,int *pos)
{
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		int sum = 0;
		for(int j=1;j<num;j++)
		{
			if(num % j==0)
				sum = sum + j;
		}
		if(sum == arr[i])
		{	
			*number = arr[i];
			*pos = i;
			break;
		}
			
	}

}
void main()
{
	int n;
	printf("Enter the size of array :\n");
	scanf("%d",&n);

	int s[n],number,pos;
	printf("Enter the elements : \n");
	for(int i=0;i<n;i++)
	scanf("%d",&s[i]);

	printf("Original Array :");
	print_array(s,n);

	first_perfect(s,n,&number,&pos);	
	printf("num is %d and pos is %d ",number,pos);	
//	print_array(a,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
