#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int, char**);
void reverse_array(char**, int, int);
void swap(char**, char**);


void swap(char **str1, char **str2) 
{
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void reverse_array(char **str, int start, int end) 
{
    while (start < end) 
    {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

int next_permutation(int n, char **s) 
{
    int indx = -1;
    for (int i = n - 2; i >= 0; i--) 
    {
        if (strcmp(s[i], s[i + 1]) < 0) 
        {
            indx = i;
            break;
        }
    }
    if (indx == -1) return 0;
    else 
    {
        for (int i = n - 1; i > indx; i--) 
        {
            if (strcmp(s[i], s[indx]) > 0) 
            {
                swap(&s[i], &s[indx]);
                break;
            }
        }
        reverse_array(s, indx + 1, n - 1);
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}