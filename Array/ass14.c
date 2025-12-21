// WAP in C to print second largest element in array.....

#include<stdio.h>
int smallestEle(int *a,int n,int max,int sec_max)
{
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			sec_max = max;
			max = a[i];
		}
		else if(a[i]>sec_max && a[i] != max)
			sec_max= a[i];
			
	}
	return sec_max;
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

	int max= 0,sec_max =0;
	
	int result = smallestEle(a,n,max,sec_max);
	
	printf("Second largest Element is : %d\n",result);
	

}
