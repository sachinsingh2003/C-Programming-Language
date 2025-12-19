// ----------Bitwise Application(LED)----------------------

// WAP to check one particular bit is set(1) or clear(0)

#include<stdio.h>
void main(){

	int num , pos ,r ;
	printf("Enter 1 byte data :-\n");
	scanf("%d",&num);

	printf("Enter the bit position:-\n");
	scanf("%d",&pos);

	r = num >> pos & 1;   // num & 1 << pos
	
	if(r)
	printf("LED is ON \n");
	else 
	printf("LED is OFF\n");
	

} 
