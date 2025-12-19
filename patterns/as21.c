#include<stdio.h>
void main()
{
	int i,j,k,l;
	char ch;
	for(i=0;i<7;i+=2)
	{
		for(j=1;j<=i;j+=2)
		{
			printf(" * ");
		}
		ch = 'P';
		for(k=0;k<7-i;k++,ch++)
		{
			printf(" %c ",ch);
		}
	/*	for(l=0;l<i;l++)
		{
			printf(" %c ",ch--);
		}
	*/
	printf("\n");	
	}
}
