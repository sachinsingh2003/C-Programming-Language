/* You are given  triangles, specifically, their sides ,  and . Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides ,  and  is Heron's formula:

 where .

Input Format

The first line of each test file contains a single integer .  lines follow with three space-separated integers, ,  and 
*/

#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

long long area(triangle t)
{
    long long a = t.a;
    long long b = t.b;
    long long c = t.c;

    return (a + b + c) *
           (a + b - c) *
           (a - b + c) *
           (-a + b + c);
}


void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(area(tr[j])> area(tr[j+1]))
            {
                temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp; 
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
