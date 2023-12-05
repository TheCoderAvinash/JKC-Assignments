/*Nested Loops (loop inside another loop)
  It is used to handle multi-dimensional data, such as 2D data.
  Following are some examples of nested loops.
  If you want to run them, run one by one.
  Running them all at once might give problems.*/

//example 1
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
    /* Output
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
}

//example 2
#include<stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
    /* Output
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
    */
}

//example 3
#include<stdio.h>
int main(){
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
    /* Output
        5 4 3 2 1
        5 4 3 2
        5 4 3
        5 4
        5
    */
}

//You can more patterns such as stars, or alphabets, or some other symbols.
