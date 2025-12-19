#include<stdio.h>
void main()
{
	int i,j,k,l;
	char ch;
	for(i=0;i<7;i+=2)
	{
		for(j=1;j<7-i;j+=2)
		{
			printf("   ");
		}
		ch = 'Z';
		for(k=0;k<=i;k++,ch--)
		{
			printf(" %c ",ch);
		}
	printf("\n");	
	}
}
