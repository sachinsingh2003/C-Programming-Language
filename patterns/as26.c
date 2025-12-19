#include<stdio.h>
void main()
{
	int i,j,k,l;
	for(i=0;i<4;i++)
	{
		for(j=1;j<4-i;j++)
		{
			printf("    ");
		}
		int d;
		for(k=1,d=i+1;k<=i+1;k++,d++)
		{
			printf("  %d ",d);
		}
		for(l=1,d=d-2;l<i+1;l++)
		{
			printf("  %d ",d--);
		}

	printf("\n");	
	}
}
