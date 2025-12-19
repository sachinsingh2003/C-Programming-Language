// ------------------ Call by refrenece wrt to pointer-------------

#include<stdio.h>


void function(int **r)
{
	static int i=10;
	*r = &i;
}
void main()
{
	int *p;
	*p = 20;
	function(&p);

	printf("i = %d\n",*p);
}

