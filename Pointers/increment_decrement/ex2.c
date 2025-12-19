#include<stdio.h>
void main()
{
	int i=258;
	char *cp;

	cp=(char *)&i;

	printf("i=%d\n",i);
	printf("cp = %d\n",*cp);

	cp = cp+1;
	*cp = *cp +1;

	printf("i=%d\n",i);
	printf("*cp = %d\n",*cp);

/*
	*cp = *cp +1 ;
	cp = cp + 1;

	printf("i=%d\n",i);
	printf("*cp = %d\n",*cp);

*/
}
