#include<stdio.h>
void main()
{
	
int num  ,pos;
printf("Enter 1 byte data:-\n");
scanf("%d",&num);


printf("Enter position bit:-\n");
scanf("%d",&pos);

num >> pos & 1 ? printf("LED is ON") : printf("LED is OFF");

}
