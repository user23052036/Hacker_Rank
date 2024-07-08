#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int permutation_number(char*);
void permutation(char*,int,int,char**,int*);
bool cheak(char**,char*,int);
void swap(char*,char*);
int factorial(int);
int main()
{
    char s[] = "ABC";
    int length = strlen(s);
    int number = permutation_number(s);
    int count=0;


    char **result = (char**)malloc(number*sizeof(char*));
    for(int i=0; i<number; i++)
        result[i] = (char*)malloc((length+1)*sizeof(char));


    permutation(s,0,length-1,result,&count);

    for(int i=0; i<number; i++)
        printf("%s\n",result[i]);
    printf("\nTotal numner of permutations is:--->%d\n",number);


    for(int i=0; i<number; i++)
        free(result[i]);
    free(result);

    return 0;
}

int permutation_number(char *s)
{
    int ascii[256]={0};
    int length = strlen(s);

    for(int i=0; i<length; i++)
        ascii[(int)s[i]]++;

    int denominator=1;
    for(int i=0; i<255; i++)
    {
        if(ascii[i]>1)
            denominator *= factorial(ascii[i]);
    }

    int length_2d = factorial(length)/denominator;
    return(length_2d);
}

int factorial(int num)
{
    if(num<=1) return 1;
    else return num*factorial(num-1);
}

void permutation(char *s, int left, int right, char **result, int *count)
{
    if(left == right)
    {
        if(cheak(result,s,*count) == false)
        {
            strcpy(result[*count],s);
            (*count)++;
        }
        return;
    }

    for(int i=left; i<=right; i++)
    {
        swap(s+left,s+i);
        permutation(s,left+1,right,result,count);
        swap(s+left,s+i);
    }
}

bool cheak(char **result, char *s, int count)
{
    for(int i=0; i<count; i++)
    {
        if(strcmp(result[i],s) == 0)
            return true;
    }
    return false;
}

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}