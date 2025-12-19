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
	struct stu *p[5];
	
	for(int i=0;i<5;i++)
	p[i] = malloc(sizeof(struct stu));
	
	printf("Enter rollno, name and marks\n");
	for(int i=0;i<5;i++)
	scanf("%d%s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);

//	p->rollno = 10;           // valid
//	p->name = "abcdef"        // invalid 
//	p->marks = 55;            // valid
// 	strcpy(p->name,"qwerty"); // valid

	
	for(int i=0;i<5;i++)
	{
	printf("%d   %s   %f",p[i]->rollno,p[i]->name,p[i]->marks);
	printf("\n");
	}

	
}
