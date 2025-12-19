// Differnce between integer pointer variable and float pointer variable

#include<stdio.h>
void main()
{
	float f = 23.5 ;
	int *ip;
	float *fp;

	fp = &f;
	ip = (int *)&f ;

	printf("*fp = %f  *p = %d \n",*fp,*ip);
}
