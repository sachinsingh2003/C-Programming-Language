#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<12;i+=2)
	{
		for(j=2;j<=i;j+=2)
			printf(" %d ",j);
		printf("\n");
	}
}
