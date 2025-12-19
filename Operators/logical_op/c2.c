#include<stdio.h>
void main(){

	int a=33;
	char c= 22;
	short int d=66;
	unsigned char f =99;
	int i =a && (d=67) || (c=24) && (f=95);
	printf("%d\n",c);
}
