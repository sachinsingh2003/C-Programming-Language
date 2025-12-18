// WAP in C to count all set bit and clear bit in array elements.....

#include<stdio.h>

void countBit(int *a,int n)
{
	int sB=0,cB=0;
	for(int i=0;i<n;i++)
	{
		for(int pos=31;pos>=0;pos--)
		{
			if(*(a+i)>>pos&1 == 1)
				sB++;
			else
				cB++;
		}
	}
	printf("Set Bit = %d\nClear Bit =%d ",sB,cB);
}

void main()
{
	int n,*p;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int a[n];
	p = a ;
	
	printf("Enter the element: \n");
	for(int i=0;i<n;i++)
	scanf("%d",p+i);

	
	printf("Original Array :");
	for(int i=0;i<n;i++)
	printf("%d ",*(p+i));
	printf("\n");
	
	countBit(a,n);

//	printf("Set Bit = %d\nClear Bit = %d ",sB,cB);
}
