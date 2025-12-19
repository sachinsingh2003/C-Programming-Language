#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=9;i=i+2)
	{
		for(j=2;j<=i;j+=2)
			printf(" * ");
		for(k=i;k<=9;k+=2)
			printf(" %d ",k);
		printf("\n");
	}
}
