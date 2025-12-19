// WAAP to design function which will allocate dynamic memory for 1 student data and return base address of memory but return type
// of function is void........

#include<stdio.h>
#include<stdlib.h>

struct stu
{
	int rollno;
	char name[20];
	float marks;
};

void ret_dma(struct stu **p)
{
	*p = malloc(sizeof(struct stu));
}
void main()
{
	struct stu *p;
	ret_dma(&p);

	printf("Enter rollno, name , marks\n");
	scanf("%d%s%f",&p->rollno,p->name,&p->marks);

	printf("%d   %s   %f\n",p->rollno,p->name,p->marks);
}		
