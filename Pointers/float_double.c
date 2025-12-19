#include<stdio.h>
void main()
{
	float f = 23.5 ;
	double d = 1234.567 ;
	long double ld = 1.2 ;
	printf("%.2f \n",f);

	printf("f =%f  f=%g  f=%e \n",f,f,f);
	printf("d =%lf  d=%g  d=%e \n",d,d,d);
	printf("ld =%Lf  ld=%Lg  ld=%Le \n",ld,ld,ld);

}
