#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A';
	for(i=0;i<4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("  ");

		}
		for(k=4-i,ch='A';k>=1;k--)
		{
			if(i%2 != 0)
				printf(" %c",ch++);
			else
				printf(" %d",k);
		}
	
	printf("\n");	
	}
}
