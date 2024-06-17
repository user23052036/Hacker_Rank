#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, cheak;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);
    
    if(cheak % 2 == 0)
        cheak = num/2;
    else
        cheak = (num+1)/2;
        
    for(int i=0; i<cheak; i++)
    {
        arr[i] = arr[i] + arr[num-1-i];
        arr[num-1-i] = arr[i] - arr[num-1-i];
        arr[i] = arr[i] - arr[num-1-i];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    free(arr);
    return 0;
}
