/*Print the following pattern usinf nested loop:
    1
    23
    456
    78910 */

#include <stdio.h>
int main()
{
    int b = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", b);
            b++;
        }
        printf("\n");
    }
    return 0;
}

/*Print the following pattern using nested loops.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int k = 10; k >= 6; k--)
    {
        for (int l = 6; l < k; l++)
        {
            printf("%d", l - 5);
        }
        printf("\n");
    }
    return 0;
}
