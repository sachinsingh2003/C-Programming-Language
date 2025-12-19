//---------------Function in Structure----------------

// WAP to design a function which will allocate  dynamic memory for 1 student data and return base addresss of memory....

#include<stdio.h>
#include<stdlib.h>

struct stu{
	int rollno;
	char name[20];
	float marks;
};
struct stu * ret_data(void);

void main()
{
	struct stu *p = ret_data();
				
	printf("Enter the rollno, name and marks\n");
	scanf("%d%s%f",&p->rollno,p->name,&p->marks);
    
	printf("%d  %s  %f\n",p->rollno,p->name,p->marks);
}
struct stu * ret_data(void) 
{
	struct stu *p ;
	p = malloc(sizeof(struct stu));
	return p;              
}

