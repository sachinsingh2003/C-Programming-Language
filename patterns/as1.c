#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<10;i+=2)
	{
		for(j=1;j<=i;j+=2)
			printf("%d",j);
		printf("\n");
	}
}
