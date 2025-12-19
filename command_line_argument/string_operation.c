// WA command line argument program for ....."123+45" = "168"

#include<stdio.h>
#include<stdlib.h>
int before(const char *p)
{
	int num = atoi(p);
	
	return num;
}
char op(const char *p)
{
	for(int i=0;p[i];i++)
	{
		if(p[i]=='+' || p[i]=='-' || p[i]=='/' || p[i]=='*')
			return p[i];
	}		
}
int after(const char *p)
{
	char a[10],k=0;
	for(int i=0;p[i];i++)
	{
		if(p[i]=='+' || p[i]=='-' || p[i]=='/' || p[i]=='*')
		{
			for(int j=i+1;p[j];j++)
			{
			//	printf("j =%c\n",p[j]);
				a[k++] = p[j];
			}
		}
	}
	return atoi(a);	
}
char* int_to_str(char *arr,int num)
{
	int k=0,newNum=0;
          while(num)
          {
                  int r = num%10;
                  num = num/10;
                  newNum = newNum *10 + r;
          }
          for(;newNum;newNum = newNum/10)
          {
                  int r = newNum%10;
                  arr[k++] = r + '0';
          }
          arr[k] ='\0';
  
      //    printf("string =%s\n",p);
	return arr;
}
void main(int argc,char **argv)
{
	if(argc <2)
	{
		printf("Usage: ./a.out <expression>\n");
        	return ;
	}
	
	int num1 = before(argv[1]);
	char symbol = op(argv[1]);
	int num2 = after(argv[1]);

	int newNum;
	switch(symbol)
	{
		case '+' : newNum = num1 + num2;
				break;

		case '-' : newNum = num1 - num2 ;
				break;
		case '*' : newNum = num1 * num2 ;
				break;
		case '/' : newNum = num1 / num2 ;
				break;
	}

	char arr[20];
	printf("Sum (string) = %s\n",int_to_str(arr,newNum));

}
