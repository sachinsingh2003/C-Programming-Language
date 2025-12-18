// WAP in C to find sum of all array elements.........

#include<stdio.h>

int sumOfElement(int a[],int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	return sum;
}
void main()
{
	int n;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	printf("\n");
	
	int a[n];
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("Array is : ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);

	printf("\n");
	int result = sumOfElement(a,n);
	printf("Sum of array is :%d",result);

}
