#include<stdio.h>
void main()
{
	int num,i,j,k,l;
	char ch='A';

	printf("Enter the number :\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		for(j=1;j<num-i;j++)	
		{
			printf("   ");
		}
		for(k=0;k<=i;k++,ch--)
		{
			printf(" %c ",ch);
		}
		char chh = ch;
		for(l=1;l<=i;l++,chh--)
		{
			printf(" %c ",chh);
		}
		ch=ch+(i+3);

	printf("\n");	
	}
}
