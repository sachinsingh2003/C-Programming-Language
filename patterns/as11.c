#include<stdio.h>
void main()
{
	int i,j,k;
	k=5;
	for(i=0;i<5;i++,k--)
	{	
		
		for(j=1;j<=5;j++)
		{
			if(j==k)
				printf(" * ");
			else
				printf(" %d ",j);
		}
		printf("\n");
	}

}
