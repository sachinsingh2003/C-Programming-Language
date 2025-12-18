// WAP in C to swap 3rd element with 4th element in array....

#include<stdio.h>
void swap3_4(int *a,int n)
{
	int temp = *(a+3);
	    *(a+3) = *(a+4);
	    *(a+4) = temp;
}

void main()
{
	int n;
	printf("Enter the size of array :\n");
	scanf("%d",&n);

	int a[n];
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("Original Array: ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");

	swap3_4(a,n);

	printf("Swaped Array: ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
