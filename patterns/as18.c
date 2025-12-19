#include<stdio.h>
void main()
{
	int i,j;
	int k;
	for(i=0;i<5;i++)
	{
		for(j=1;j<5-i;j++)
		{
			printf(" * ");
		}
		for(k=1;k<=i+1;k++)
		{
			printf(" %d ",k*k);
		}
	printf("\n");	
	}
}
