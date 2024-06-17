#include<stdio.h>

int min(int,int,int,int);
int main()
{
    int num,ass;

    scanf("%d",&num);
    ass = 2*num-1;

    for(int i=0; i<ass; i++)
    {
        for(int j=0; j<ass; j++)
            printf("%d ",num-min(i,j,ass-1-i,ass-1-j));
        printf("\n");
    }
    return 0;
}

int min(int i, int j, int k, int l)
{
    if(i<=j && i<=k && i<=l)
        return i;
    else if(j<=k && j<=l && j<=i)
        return j;
    else if(k<=i && k<=j && k<=l)
        return k;
    else
        return l;
}
