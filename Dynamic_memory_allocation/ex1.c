// WAP to allocate dynamic memory for 1 int .....

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;
	p = malloc(sizeof(int));

	printf("Enter one integer:\n");
	scanf("%d",p);

	printf("Num is %d\n",*p);
}
