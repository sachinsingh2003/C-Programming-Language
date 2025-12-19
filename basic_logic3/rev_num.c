#include<stdio.h>
void main()
{
	int num,a,sum=0,count=0 ;
	printf("Enter the number :\n");
	scanf("%d",&num);	
	
	for(;num;num=num/10)
	{
		a = num % 10;
		sum = sum *10 + a ;
	}
	printf("%d \n",sum);
	

	
	
	

}
