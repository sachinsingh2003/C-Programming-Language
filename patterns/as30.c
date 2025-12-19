#include<stdio.h>
void main()
{
	int num,i,j,k;
	char ch;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		for(j=1;j<num-i;j++)
			printf(" ");
		for(k=0,ch='A';k<=i;k++)
			printf("%c ",ch++);
		printf("\n");
	}
	for(i=0;i<num-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=0,ch='A';k<(num-1)-i;k++)
			printf("%c ",ch++);
		printf("\n");
	}
}
