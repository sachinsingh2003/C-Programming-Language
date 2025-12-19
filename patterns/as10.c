#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A';
	for(i=0;i<5;i++,ch--)
	{	
		for(j=1;j<5-i;j++)
		{	
			printf("   ");
		}
		
		for(k=1,ch='A';k<=i+1;k++)
		{
			if(i%2==0)
				printf(" # ");
			else
				printf(" %c ",ch++);
		}
		printf("\n");
	}

}
