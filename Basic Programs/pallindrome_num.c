#include<stdio.h>
void main()
{
	int num,a,sum=0,temp=0 ;
	printf("Enter the number :\n");
	scanf("%d",&num);	
	
	temp = num ;
	for(;num;num=num/10)
	{
		a = num % 10;
		sum = sum *10 + a ;
	}
	if(temp == sum)
		printf("pallindrome\n");
	else
		printf("Not pallindrome \n");
	

	
	
	

}
