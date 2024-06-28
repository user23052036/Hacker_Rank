#include<stdio.h>
#include<stdlib.h>

void sort_dec(int*, int);
int main()
{   
    int budget,n,m,max=0;
    int *keyboard, *usb;

    scanf("%d%d%d",&budget,&n,&m);

    keyboard = (int*)malloc(n*sizeof(int));
    usb = (int*)malloc(m*sizeof(int));

    sort_dec(keyboard,n);
    sort_dec(usb,m);

    for(int i=0; i<n; i++)
        scanf("%d",&keyboard[i]);

    for(int i=0; i<m; i++)
        scanf("%d",&usb[i]);
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(keyboard[i]+usb[j] <= budget && keyboard[i]+usb[j] > max)
                max = keyboard[i]+usb[j];
            
    if(max == 0)
      printf("-1");
    else
      printf("%d",max);
    return 0;
}

void sort_dec(int *arr, int n)
{
    int num=0;

    while(num <= n-1)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] < arr[i+1])
            {
                arr[i] = arr[i] + arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] = arr[i] - arr[i+1];
            }
        }
        num++;
    }
}
