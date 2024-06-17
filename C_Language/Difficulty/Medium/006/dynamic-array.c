#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_of_shelves;
    scanf("%d", &number_of_shelves);
    int **selves = (int**)malloc(number_of_shelves*sizeof(int*));  
    int *number_of_books = (int*)calloc(number_of_shelves,sizeof(int));

    int queries;
    scanf("%d", &queries);
    
    while (queries--) 
    {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) 
        {
            int x, y;
            scanf("%d %d", &x, &y);

            selves[x] = (int*)realloc(selves[x],(number_of_books[x]+1)*sizeof(int)); 
            selves[x][number_of_books[x]]=y;
            number_of_books[x] = number_of_books[x]+1;
        } 
        else if (type_of_query == 2) 
        {
            int x,y,total_pages=0;
            scanf("%d%d",&x,&y);

            for(int i=0; i<number_of_books[x]; i++)
                total_pages = total_pages + selves[x][i];
                
            printf("%d\n",total_pages);
        } 
        else if(type_of_query == 3)
        {
            int x;
            scanf("%d",&x);
            printf("%d\n",number_of_books[x]);
        }
    }


    free(number_of_books);

    for(int i=0; i<number_of_shelves; i++)
        if(selves[i][0])
            free(selves[i]);

    free(selves);
    return 0;
}