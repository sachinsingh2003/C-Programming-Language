#include<stdio.h>
void main(){

	int i=4,j=8;
	i =i |j & j|i ;
	j = ~i ;
	printf("%d %d\n",i,j);
}
