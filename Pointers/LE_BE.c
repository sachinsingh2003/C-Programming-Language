//WAP to prove that we are working in little endian environment....

#include<stdio.h>
void main()
{
	int i=10;
	char *p;

	p = (char *)&i ;

	if(*p == 10)
		printf("Little Endian...\n");
	else
		printf("Big Endian...\n");
}
