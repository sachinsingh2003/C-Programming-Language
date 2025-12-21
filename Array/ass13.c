// WAP in C to print second smallest element in array.....

#include<stdio.h>
int smallestEle(int *a,int n)
{
	int min , sec_min;	
	
	if(a[0]<a[1])
	{
		min = a[0];
		sec_min =a[1];
	}
	else
	{
		min = a[1];
		sec_min = a[0];
	}

	for(int i=2;i<n;i++)
	{
		if(a[i]<min)
		{
			sec_min = min;
			min = a[i];
		}
		else if(a[i]<sec_min && a[i] != min)
			sec_min= a[i];
			
	}
	return sec_min;
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

	int result = smallestEle(a,n);
	
	printf("Second smallest Element is : %d\n",result);
	

}
