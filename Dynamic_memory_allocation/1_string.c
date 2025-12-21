// WAP to allocate dynamic memory for 1 string then scan and print.....

#include<stdio.h>
#include<stdlib.h>
void main()
{
	char *p;
	p = malloc(sizeof(char)*20);

	printf("Enter the string....\n");
	scanf("%s",p);
	printf("%s\n",p);
}
