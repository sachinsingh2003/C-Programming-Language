// WAP to swap adjacent bits using bit masking----------

#include<stdio.h>
void main()
{
int num ;

printf("Enter the number:-\n");
scanf("%x",&num);

num = ((num & 0xAAAAAAAA)>>1) | ((num & 0x55555555)<<1);
printf(" new number is - %x",num);

}
