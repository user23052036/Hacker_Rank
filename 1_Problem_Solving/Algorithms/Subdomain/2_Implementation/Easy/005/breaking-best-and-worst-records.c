#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,count1=-1,count2=-1;
    int min=100000001,max=-1;
    
    scanf("%d",&size);
    
    int *ptr = (int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ptr[i]);
        if(ptr[i] > max)
        {
            max = ptr[i];
            count1++;
        }
        if(ptr[i] < min)
        {
            min = ptr[i];
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    free(ptr);
    return 0;
}
