// WAP in C to print array using int pointer...........

#include<stdio.h>
void main()
{
	int a[5],*p,ele;

	ele = sizeof(a)/sizeof(a[0]);

	p = a ;

	printf("Enter the elements: \n");
	for(int i=0;i<ele;i++)
	scanf("%d",p+i);

	printf("Arrays : ");
	for(int i=0;i<ele;i++)
	printf("%d ",*(p+i));
}
