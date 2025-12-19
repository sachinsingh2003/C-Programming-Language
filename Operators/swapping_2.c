// WAP a for swapping of two numbers without using third variable

#include<stdio.h>
void main(){

	int  a,b;
	printf("Enter the numbers:-\n");
	scanf("%d%d",&a,&b);

	printf("Before swapping a=%d and b=%d\n",a,b);
	
/*      a = a+b;
	b = a-b;
	a = a-b;
 */

/*	a= a*b;
	b= a/b;
	a= a/b;	
*/
	
//	a = a+b - (b=a);

	a = a*b / (b=a);	
	printf("After swapping a=%d and b=%d\n",a,b);

}
