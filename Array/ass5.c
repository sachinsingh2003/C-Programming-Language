// WAP in C to find sum of 1st digit all array elements.........

#include<stdio.h>

int sumOfElement(int a[],int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		int num = a[i];
		int rev = 0;
		for(;num;num=num/10)
		{
			int a = num%10;
			rev = rev * 10 + a;
		}
		printf("%d + ",rev%10);
		sum = sum + rev%10;
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
	printf("Sum of 1st elemets is : ");
	int result = sumOfElement(a,n);
	printf(" --> %d ",result);

}
