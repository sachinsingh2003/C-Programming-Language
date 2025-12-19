// WAP in C  for given math formula : 3ab^2 + a^3 + 3ba^2 + b^3 


#include<stdio.h>
void main(){

	int a,b,sum;
	
	printf("Enter the number:\n");
	scanf("%d %d",&a,&b);

	sum = 3*(a*b*b) + a*a*a + 3*(b*a*a) + b*b*b ;
	
	printf("Sum is :- %d",sum);
}
