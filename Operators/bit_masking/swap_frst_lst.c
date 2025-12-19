// WAP to swap first and last byte of a given int number using bit masking technique----------

#include<stdio.h>
void main()
{
int num ,r1,r2,r3;
printf("Enter the number:-\n");
scanf("%x",&num);

//r1 = (num & 0x000000ff)<<24 ;

//r2 = (num & 0xff000000)>>24 ;

//r3 = num & 0x00ffff00 ;

num = ((num & 0x000000ff)<<24) | ((num & 0xff000000)>>24) | num & 0x00ffff00 ; 


//printf("new Number is :-%x",r1|r2|r3);

printf("New Number is - %x",num);
}
