#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    fgets(s,100,stdin);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("Hello, World!\n");
    printf("%s",s);  
    return 0;
}
