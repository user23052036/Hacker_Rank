#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender) 
{
    int sum1=0,sum2=0;
    
    if(gender == 'b')
    {
    for(int i=0; i<number_of_students; i=i+2)
        sum1 = sum1 + marks[i];
    return sum1;
    }
    
    else
    {
    for(int i=1; i<number_of_students; i=i+2)
        sum2 = sum2 + marks[i];
    return sum2;
    }
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}