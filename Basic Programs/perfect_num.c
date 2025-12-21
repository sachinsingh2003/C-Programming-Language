#include<stdio.h>
void main()
{
	int num,sum=0,count=0 ;
	printf("Enter the number :\n");
	scanf("%d",&num);	
	
	for(int i=1;i<num;i++)
	{
		if(num %i ==0)
			sum = sum + i ;
	}
	if(sum == num)
		printf("Perfect Number \n");
	else
		printf("Not Perfect Number \n");

	
	
	

}
