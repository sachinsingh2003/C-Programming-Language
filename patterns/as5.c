#include<stdio.h>
void main()
{
	int i,j,k;
	char ch = 'A';
	for(i=1;i<=5;i++)
	{
		for(j=0,ch='A';j<=i-1;j++)
			if(j%2!=0)
				printf(" * ");
			else
			{	printf(" %c ",ch);
				ch=ch+2;
			}
		printf("\n");
	}
}
