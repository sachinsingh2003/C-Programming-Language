// WAP to design basic calculator application using load time input....

#include<stdio.h>
#include<stdlib.h>
void main(int argc, char **argv)
{
	if(argc != 4)
	{
		printf("USAGE : ./a.out num1 op num2\n");
		return;
	}
	
	int n1,n2,n3;
	char op;
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2][0];

	switch(op)
	{
		case '+' : 
			printf("sum =%d\n",n1+n2);
			break;
		case '-' : 
			printf("minus=%d\n",n1-n2);
			break;
		case '*' : 
			printf("multiply=%d",n1*n2);
			break;		
	}
}
