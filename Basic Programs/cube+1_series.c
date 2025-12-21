#include<stdio.h>
void main()
{
	int num;
	printf("Enter the limit:\n");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		printf(" %d ",i*i*i +1);
	}
}
