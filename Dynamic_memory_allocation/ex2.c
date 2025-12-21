// WAP to allocate dynamic memory for 5 int .....

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;
	p = malloc(sizeof(int)*5);

	printf("Enter  integer:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&p[i]);

	printf("--------------------\n");
	for(int i=0;i<5;i++)
	printf("%d ",p[i]);
}
