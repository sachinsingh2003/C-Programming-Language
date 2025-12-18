// WAP in C to store set bit count in another array.....

#include<stdio.h>

void setBitcount(int a[],int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int pos=31;pos>=0;pos--)
		{
			if(a[i]>>pos&1 == 1)
			{
				count++;
			}
		}
		b[i] = count;
	}

}
void main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int a[n],b[n];
	printf("Enter the element :\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Original Array :");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	setBitcount(a,b,n);

	printf("Set Bit Array :");
	for(int i=0;i<n;i++)
		printf("%d ",b[i]);

	printf("\n");

}
