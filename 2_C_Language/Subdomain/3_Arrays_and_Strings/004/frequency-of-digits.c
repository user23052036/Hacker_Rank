#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int count = 0,num_count=0;
    
    char copy,arr[1000];
    scanf("%s",arr);
    
    for(char i='0'; i<='9'; i++)
    {
        for(int j=0; j<strlen(arr); j++)
        {
            if(arr[j] == i)
                count++;
        }
        printf("%d ",count);
        count=0;
    }   
    return 0;
}
