#include<stdio.h>
void main()
{
	int i=258;
	char *cp;
	int *ip;

	cp = (char *)&i;
	ip = &i ;


	printf("&i = %p\n",&i);
	printf("cp = %p   cp+1= %p \n",cp,cp+1);
	printf("ip = %p   ip+1= %p \n",ip,ip+1);
}
