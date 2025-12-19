// Difference btw integer pointer and character pointer....

#include<stdio.h>
void main()
{
	int i=258,*p;
	char *q;

	p = &i;
	q = (char *)&i;   //&i

	printf("*p = %d *q =%d\n",*p,*q);

	*q = 'a';

	printf("*p = %d *q =%d\n",*p,*q);
	printf("i = %d\n",i);
}
