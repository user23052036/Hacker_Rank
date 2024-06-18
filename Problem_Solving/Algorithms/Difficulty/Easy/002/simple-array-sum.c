#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,sum=0, *pointer;
  
  scanf("%d",&n);
  pointer = (int*)malloc(n*sizeof(int));
  
  for(int i=0; i<n; i++)
  {
    scanf("%d",&pointer[i]);
    sum = sum + pointer[i];
  }
  printf("%d",sum);
  return 0;
}
