#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle*, int);
float area_tri(triangle*, int);

float area_tri(triangle *tr, int n)
{
    float p = (tr[n].a + tr[n].b + tr[n].c)/2.0;
    return (sqrt(p * (p-tr[n].a) * (p-tr[n].b) * (p-tr[n].c)));
}

void sort_by_area(triangle *tr, int n)
{ 
    triangle t1;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(area_tri(tr,j) > area_tri(tr, j+1))
            {
                t1 = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = t1;
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