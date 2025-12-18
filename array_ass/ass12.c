// WAP in C to print smallest element in array.....

#include<stdio.h>
int smallestEle(int *a,int n,int min)
{
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
			min = a[i];
	}
	return min;
}

void main()
{
	int n;
	printf("Enter the size :\n");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Array : ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");

	int min= a[0];
	
	int result = smallestEle(a,n,min);
	
	printf("Smallest Element is : %d\n",result);
	

}
