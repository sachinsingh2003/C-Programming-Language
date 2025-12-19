#include<stdio.h>
void main()
{
	int i,j;
/*
	for(i=1;i<12;i+=2)
	{	
		for(j=1;j<12-i+1;j+=2)
		{
			if(i==1 || i==5 || i==9)
				printf(" * ");
			else
				printf(" %d ",j);
		}
		printf("\n");
	}
*/

	for(i=0;i<6;i++)
	{
		for(j=1;j<=11-2*i;j=j+2)
		{	if(i%2==0)
				printf(" * ");
			else
				printf(" %d ",j);
		}
		printf("\n");
	}
}





