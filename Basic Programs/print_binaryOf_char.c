#include<stdio.h>
void main()
{
	char ch;
	int a,sum=-19,count=0 ;
	printf("Enter the number :\n");
	scanf(" %c",&ch);	

	for(int i=31;i>=0;i--)
	{
		printf("%d",ch>>i&1);		
	}
	printf("\n");

	
	
	

}
