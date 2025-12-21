// WAP to print fabonacci series

#include<stdio.h>
void main()
{
	int  num,a=0,b=1,c;
	printf("Enter the limit:\n");
	scanf("%d",&num);

	printf("%d %d ",a,b);

	for(int i=0;i<=num;i++)
	{
		c = a+b;
		a = b;
		b = c;	
		
		printf(" %d ",c);
	}
}
