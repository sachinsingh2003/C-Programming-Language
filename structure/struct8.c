// ---------------- Nested Structure--------------
// In a structur if some of the member are variable of another structure is called as a nested structure....

#include<stdio.h>
#include<stdlib.h>

// -------------Method 1------------- 
struct date
{
	int day;
	int month;
	int year;
};
struct emp
{
	int id;
	char name;
	float rank;
	struct date doj;
	struct date dor;
};
// -----------Method 2------------
/*
struct emp
{
	int id;
	char name;
	float rank;
	struct date 
	{
		int day;
		int month;
		int year;
	}doj,dor;
};
*/
void main()
{
	struct emp e;
	
	e.doj.day = 1;
	e.doj.month = 12;
	e.doj.year = 2025;

	e.dor.day = 30;
	e.dor.month = 2;
	e.dor.year = 2026;

	printf("\nDate of Joining : %d   %d   %d",e.doj.day,e.doj.month,e.doj.year);
	printf("\nDate of Resign : %d   %d   %d",e.dor.day,e.dor.month,e.dor.year);
	printf("\n");
}
