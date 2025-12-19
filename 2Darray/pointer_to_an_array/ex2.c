#include<stdio.h>
void main()
{
	int b[2][3]= {{10,20,30},{40,50,60}};
	int (*p)[3];
	p = b ;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}
