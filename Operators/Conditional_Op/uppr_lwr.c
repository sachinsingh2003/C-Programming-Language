//WAP to check alphabet is upper case or lower case.......

#include<stdio.h>
void main(){

char ch ;
printf("Enter a alphabet:\n");
scanf("%c",&ch);

//ch >> 5 & 1 ? printf("Lower Case\n") : printf("Upper Case\n");

//ch <= 122 && ch >= 97 ? printf("lower case\n"): printf("upper case\n");

ch <='z' && ch >='a' ? printf("lower case\n"): printf("upper case\n");


}
