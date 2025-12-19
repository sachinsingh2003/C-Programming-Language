#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i;j++)
			printf(" %d ",j+1);
		printf("\n");
	}
}
