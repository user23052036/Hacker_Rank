#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,min;
    scanf("%d",&n);
    int count=n;

    int *arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
       
    while(count>1)
    { 
        count=0,min=10000;
        for(int i=0; i<n; i++)
            if(min > arr[i] && arr[i] != 0)
                min = arr[i];  
                 
        for(int i=0; i<n; i++)
        {   
            if(arr[i] != 0)
            {
                arr[i] = arr[i] - min;
                count++;
            }
        }
        if(count != 0)
            printf("%d\n",count);
    }
    free(arr);
    return 0;
}
