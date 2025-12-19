#include<stdio.h>
void main(){
	
	int i =5,j=7,k=9,l;
	l = i%j || j >= k^j & i ;
	printf("%d\n", l);
}
