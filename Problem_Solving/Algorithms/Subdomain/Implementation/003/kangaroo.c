#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int pos1,pos2,jump1,jump2,dist,div=0,count=0;
    scanf("%d%d%d%d",&pos1,&jump1,&pos2,&jump2);   
    
    while(pos1 != pos2)
    {
        pos1 = pos1 + jump1;
        pos2 = pos2 + jump2;
        
        dist = abs(pos1-pos2);
        if(dist >= div)
        {
            div = dist;
            count++;
            
            if(count == 3)
            {
                printf("NO");
                exit(0);
            }
        }   
    }
    printf("YES");
    return 0; 
}
