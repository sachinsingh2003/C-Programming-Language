// WAP to check number is even or odd 

#include<stdio.h>
void main(){

int num ;

printf("Enter the number:-\n");
scanf("%d",&num);

//num %2 ? printf("Odd number\n") : printf("Even number\n");

num & 1 ? printf("Odd number\n") : printf("Even number\n");

}
