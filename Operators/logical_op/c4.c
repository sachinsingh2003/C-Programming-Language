#include<stdio.h>
void main(){

	int a=1,b=3,c=2,d=4,e;
	e = (c= a+b) || (d=a-b);
	printf("%d%d%d%d%d",a,b,c,d,e);
}

