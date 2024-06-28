#include<stdio.h>

void input(int*);
void compareTriplets(int*,int*);

int main()
{
  int a[3],b[3];
  
  input(a);
  input(b);
  compareTriplets(a,b);
  
  return 0;
}

void input(int *p)
{
  for(int i=0; i<3; i++)
    scanf("%d",&p[i]);
}

void compareTriplets(int *p, int *q)
{
  int count1=0,count2=0;
  
  for(int i=0; i<3; i++)
  {
    if(p[i]>q[i])
      count1++;
    else if(p[i]<q[i])
      count2++;
  }
  
  printf("%d %d",count1,count2);
}
