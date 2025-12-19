#include<stdio.h>
void main()
{
	int i,j,c,d;
	for(i=0;i<5;i++)
	{	
		d = 5;
		for(j=0,c=i+1;j<=i;j++,c=c+d)
		{
			printf(" %d ",c);
			d--;

		}	
		printf("\n");
	}

}
