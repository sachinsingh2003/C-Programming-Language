//---------------Dynamic Memory in Structure---------------

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct stu v,*p;
	
	p = malloc(sizeof(struct stu));
	
	printf("Enter rollno, name and marks\n");
	scanf("%d%s%f",&p->rollno,p->name,&p->marks);

//	p->rollno = 10;           // valid
//	p->name = "abcdef"        // invalid 
//	p->marks = 55;            // valid
// 	strcpy(p->name,"qwerty"); // valid


	printf("%d   %s   %f",p->rollno,p->name,p->marks);
	printf("\n");
	

	
}
