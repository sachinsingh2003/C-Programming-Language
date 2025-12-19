#include<stdio.h>
void main()
{
	int num,a,sum=-19,count=0 ;
	printf("Enter the number :\n");
	scanf("%d",&num);	

	for(int i=31;i>=0;i--)
	{
		if((num>>i&1)==1)
			count++;		
	}
	printf("%d",count);
	
		printf("\n");

	
	
	

}
