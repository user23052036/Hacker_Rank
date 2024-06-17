#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
        
        if(ptr[i] < 38)
            printf("%d\n",ptr[i]);
        else if( 5*((ptr[i]/5)+1) - ptr[i]  <  3)
            printf("%d\n",5*((ptr[i]/5)+1));
        else
            printf("%d\n",ptr[i]);
    }   
    free(ptr);
    return 0;
}
