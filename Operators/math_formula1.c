// WAP in C for given math formula----a^2 + 2ab + b^2 

#include<stdio.h>
void main()
{
	int a ,b,sum ;
	printf("Enter the number:-\n");
	scanf("%d %d",&a,&b);

	sum =  a*a + 2*(a*b) + b*b  ;

	printf("Sum id %d",sum); 

}
