#include<stdio.h>
void main()
{
	int i,j,k;
	int d =5;
	for(i=0;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("  ");

		}
		for(k=5-i;k>=1;k--)
		{
			if(i%2 != 0)
				printf("  %d  ",k);
			else
				printf("  *  ");
		}
	
	printf("\n");	
	}
}
