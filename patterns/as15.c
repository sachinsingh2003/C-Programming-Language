#include<stdio.h>
void main()
{
	int i,j,k;
 		
	for(i=0;i<7;i++)
	{
		int d= 1;
		for(j=1,k=1;j<=i+1;j++)
		{
			if(j>2)
			{	
				printf(" %d ",j+k);
				k=(k+1)+d;
				d++;
			}
			else
				printf(" %d ",j);
		}
	printf("\n");
	}

}
