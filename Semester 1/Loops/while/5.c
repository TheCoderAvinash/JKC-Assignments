/*Nested Loops (loop inside another loop)
  It is used to handle multi-dimensional data, such as 2D data.
  Following are some examples of nested loops.
  If you want to run them, run one by one.
  Running them all at once might give problems.*/

// example 1
#include <stdio.h>
int main()
{
    int i = 1, j;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d\t", j);
            j++;
        }
        printf("\n");
        i++;
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

// example 2
#include <stdio.h>
int main()
{
    int i = 5, j;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d\t", j);
            j++;
        }
        printf("\n");
        i--;
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

// example 3
#include <stdio.h>
int main()
{
    int i = 1, j;
    while (i <= 5)
    {
        j = 5;
        while (j >= i)
        {
            printf("%d\t", j);
            j--;
        }
        printf("\n");
        i++;
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

// //You can more patterns such as stars, or alphabets, or some other symbols.
