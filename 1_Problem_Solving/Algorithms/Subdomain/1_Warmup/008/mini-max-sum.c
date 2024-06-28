#include<stdio.h>
int main()
{
    long int arr[5];
    int arr_count=5;
    
    for(int i=0; i<5; i++)
        scanf("%ld",&arr[i]);
    
    
    for(int i=0; i<arr_count; i++)
    {
        for(int j=0; j<arr_count-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    
    printf("%ld %ld",arr[0]+arr[1]+arr[2]+arr[3],arr[1]+arr[2]+arr[3]+arr[4]);
       
    return 0;

}
