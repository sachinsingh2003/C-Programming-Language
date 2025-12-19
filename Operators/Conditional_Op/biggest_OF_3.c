// WAP to find biggest of three numbers, using conditional operators.

#include<stdio.h>
void main()
{

	int a,b,c,result;
	printf("Enter the numbers:-\n");
	scanf("%d%d%d",&a,&b,&c);

	result = a>b ? (a>c ? a : c) : (b>c ? b : c) ;
	printf("Biggest Number is = %d",result);

}
