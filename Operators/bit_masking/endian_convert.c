// WAP to convert little endian to big endian-------------

#include<stdio.h>
void main()
{
 int num ,a,b,c,d;
printf("Enter the number :-\n");
scanf("%x",&num);

a= ((num & 0x000000ff)<<24);

b= ((num & 0xff000000)>>24);

c= ((num & 0x00ff0000)>>8);

d= ((num & 0x0000ff00)<<8);

printf("New number is :- %x",a|b|c|d);

}
