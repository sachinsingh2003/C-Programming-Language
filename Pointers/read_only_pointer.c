
#include<stdio.h>
void main()
{
	int i=10;
	const int *p;
	int *q;

	p = q = &i;

	printf("i=%d *p=%d *q=%d \n",i,*p,*q);
		
	*q = 20 ;
	
	printf("i=%d *p=%d *q=%d \n",i,*p,*q);
		


}
