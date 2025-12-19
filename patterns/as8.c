#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<5;i++)
	{
		for(j=5;j>4-i;j--)
		{	if(i%2==0)
				printf(" %d ",j);
			else
				printf(" * ");
		}
		printf("\n");
	}

}
