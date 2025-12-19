// WAP to check number is power of 2 or not ......using conditional operators

#include<stdio.h>
void main()
{
int num;

printf("Enter the number:-\n");
scanf("%d",&num);

num & num-1 ? printf("Number is not power of 2:\n") : printf("Number is power of 2");

}
