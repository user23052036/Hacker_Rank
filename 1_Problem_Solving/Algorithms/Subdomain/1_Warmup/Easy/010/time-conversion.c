#include<stdio.h>
#include<math.h>

int main()
{
    int num=0;
    char s[11];
    
    scanf("%s",s);
    num = (s[0] - '0')*10 + (s[1] - '0');
    
    if(s[8] == 'P')
    {
        if(num != 12)
        {
            num = num+12;
            s[0] = num/10 + '0';
            s[1] = num%10 + '0';
        }
    }
    
    else if(s[8] == 'A')
    {
        if(num == 12)
        {
            s[0] = '0';
            s[1] = '0';
        } 
    }
    s[8] = '\0';
    
    printf("%s",s);
    return 0;
}
