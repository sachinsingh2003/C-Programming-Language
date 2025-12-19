#include<stdio.h>
void main()
{
	int num=12,sum=0,count=0 ;
	
	for(int i=1;i<=num;i++)
	{
		if(num %i ==0)
			count++;
	}
	printf("%d\n",count);
	
	
	

}
