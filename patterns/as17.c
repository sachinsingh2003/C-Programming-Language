#include<stdio.h>
void main()
{
	int i,j,k;
	int d=0;

	for(i=0;i<10;i++)
	{
		d =0 ;
		for(j=2,k=1;j<=i+2;j++)
		{
			if(j>3)
			{	printf(" %d ",j+k);
				k = (k+1)+d;
				d+=2;
			}
			else
				printf(" %d ",j);
		}
		printf("\n");
	}
}
