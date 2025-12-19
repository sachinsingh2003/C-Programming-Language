//---------------Pointer in Structure---------------
// In structure if any of the member is pointer type then how to handle it...

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
	int rollno;
	char *name;
	float marks;
};
void main()
{
	struct stu *p;
	
	p = malloc(sizeof(struct stu));
	p->name = malloc(20);
	
	printf("Enter rollno, name and marks\n");
	scanf("%d%s%f",&p->rollno,p->name,&p->marks);

//	p->rollno = 10;           // valid
//	p->name = "abcdef"        // invalid 
//	p->marks = 55;            // valid
// 	strcpy(p->name,"qwerty"); // valid


	printf("%d   %s   %f",p->rollno,p->name,p->marks);
	printf("\nFirst Char of name is  %c",p->name[0]);
	printf("\n");
	

	
}
