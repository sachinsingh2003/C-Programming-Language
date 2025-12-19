#include<stdio.h>
void main(){

	int i=10,j=5;
	i = i | j && j^i ;
	printf("%d %d\n",i,j);
}
