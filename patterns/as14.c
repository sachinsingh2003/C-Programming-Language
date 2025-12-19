#include<stdio.h>
void main()
{
	int i,j;
 	int k=1;	
	for(i=1;i<8;i+=2)
	{
		for(j=1,k=1;j<i+1;j++)
		{
			if(j>1)
			{	
				printf(" %d ",i-k);
				k++;
			}
			else
				printf(" %d ",i);
		}
	printf("\n");
	}

}
