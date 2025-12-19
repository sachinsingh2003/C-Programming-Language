#include<stdio.h>
void main()
{
	int i,j,k;
	int d=1;
	for(i=0;i<6;i++)
	{
		for(j=1,k=1;j<7-i;j++)
		{
			if(j>2)
			{	printf(" %d ",j+k);
				k = (k+1)+d;
				d++;
			}
			else
				printf(" %d ",j);
		}
		printf("\n");
	}	
}
