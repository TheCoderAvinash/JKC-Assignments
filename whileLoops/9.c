/*Print the following pattern using nested loop:
    1
    2 3
    4 5 6
    7 8 9 10 */

#include <stdio.h>
int main()
{
    int i=1, b = 1, j;
    while(i < 5)
    {
        j = 1;
        while(j <= i)
        {
            printf("%d ", b);
            b++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
