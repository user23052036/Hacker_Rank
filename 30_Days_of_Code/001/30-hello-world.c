#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char arr[100];
  fgets(arr,100,stdin);
  
  printf("Hello, World.\n");
  printf("%s",arr);
  
  return 0;
}
