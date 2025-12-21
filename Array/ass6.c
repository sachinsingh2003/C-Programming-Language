// WAP in C to delete 1st digit all array elements.........

#include<stdio.h>

int deleteDigit(int a[],int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		int num = a[i];
		int rev = 0,sum=0;
		while(num)
		{
			int a = num%10;
			rev = rev *10 +a;
			num = num/10;
		}
		num = rev/10 ;
		while(num)
		{
			int r = num%10;
			num = num/10;
			sum = sum *10 + r;
		}
		a[i] = sum;
	}
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
	deleteDigit(a,n);
	printf("New Array is: ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);

	printf("\n");

}
