//WAP to check given number is positive or negative using conditional operator----

#include<stdio.h>
void main()
{
int num;
printf("Enter the number:-\n");
scanf("%d",&num);

//num>0 ? printf("Positive number\n"):printf("Negative number\n");

num >> 31 & 1 ? printf("negative number\n"): printf("positive number\n");


//   num = 24 => binary = 00000000 00000000 00000000 00011000
//   num >> 31 =>         00000000 00000000 00000000 00000000
//   1  =>                00000000 00000000 00000000 00000001
//   num >> 31 & 1 =>     00000000 00000000 00000000 00000000  = 0 => postive number 

}
