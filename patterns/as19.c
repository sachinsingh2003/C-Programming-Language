#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=1;j<5-i;j++)
		{
			printf(" * ");
		}
		ch = 'Z';
		for(k=1;k<=i+1;k++,ch--)
		{
			printf(" %c ",ch);
		}
	printf("\n");	
	}
}
