#include<stdio.h>
void main()
{
	int num=11,sum=0,count=0 ;
	
	for(int i=1;i<=num;i++)
	{
		if(num %i ==0)
		{	count++;
			printf(" %d ",i);
		}
	}
	printf("%d\n",count);
	
	
	

}
