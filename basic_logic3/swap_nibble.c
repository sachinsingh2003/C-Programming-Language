#include<stdio.h>
void main()
{
	int m,n,num ;
	printf("Enter the number :\n");
	scanf("%d",&num);	

	for(int i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 ==0)
			printf(" ");		
	}
	printf("\n");
	int i,j;
	for(i=0,j=8; i<=3 ;i++,j++)
	{
		m = num >> i&1;
		n = num >> j&1;

		if(m)
		{
			num = num ^ 1<<i;
			num = num ^ 1<<j;
		}
	}
		
	for(int i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 ==0)
			printf(" ");		
	}
	printf("\n");
	

}
