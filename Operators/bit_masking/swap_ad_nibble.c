// WAP to swap the adjacent nibble

#include<stdio.h>
void main()
{

int num ;
printf("Enter the number:-\n");
scanf("%x",&num);

num = ((num & 0x0f0f0f0f)<<4) | ((num & 0xf0f0f0f0)>>4);
printf("%x",num);

}
