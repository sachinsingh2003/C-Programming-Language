// WAP in C using Recursive function to product of digit factor of 3 given any int number .
// i/p: n= 345638 o/p: product= 54
// int rec_fun_product( int num );

#include<stdio.h>
int rec_fun_product(int num)
{
	static int product = 1;
	if(num)
	{
		int digit = num%10;
		if(digit%3==0)
		{
			product = product*digit;
		}
		rec_fun_product(num/10);
	}
	return product;
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int product= rec_fun_product(num);
	printf("Product of digit factor of 3 is %d\n",product);

}
