#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d",&n);  
    
    int *ptr = (int*)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
        sum = sum+ptr[i];
    }
    
    printf("%d",sum);
    
    free(ptr);
    return 0;
}
