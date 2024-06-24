#include <stdio.h>
#include <string.h>

int main() 
{
  char ch,s[30],sen[100];
  
  scanf("%c",&ch);
  getchar();
  scanf("%s",s);
  getchar();
  scanf("%[^\n]%*c",sen);
  
  printf("%c\n",ch);
  printf("%s\n",s);
  printf("%s",sen);  
  return 0;
}