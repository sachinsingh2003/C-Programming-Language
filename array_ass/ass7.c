// WAP in C to print binary of all element in array.......

#include<stdio.h>

void binary(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d : ",*(a+i));
		for(int pos=31;pos>=0;pos--)
		{
			printf("%d",*(a+i)>>pos&1);
			if(pos%8==0)
				printf(" ");
		}
		printf("\n");
	}
}
void main()
{
	int n;
	printf("enter the number of element: ");
	scanf("%d",&n);

	int a[n],*p;
	p = a;

	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	scanf("%d",p+i);
	
	binary(a,n);
	
	
}
