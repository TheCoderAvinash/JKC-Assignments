/*
Write a menu driven program to perform the following tasks by using Switc-Case Statement:
(a)  To display the series: 0,3,8,15.... to n terms
    (value of 'n' is to be input by the user)
(b) To find and display the sum of the series:
    S= 1/2 + 3/4 + 5/6 + 7/8 +.....+ 19/20
*/

#include <stdio.h>
int main()
{
    float s = 0;
    int n;
    char o;
    printf("Enter (a) for series {0,3,8,15,24...n}\nEnter (b) to find the sum of 1/2 + 3/4 +...+19/20\nYour Choice: ");
    scanf("%c", &o);
    switch (o)
    {
    case 97:
        printf("Enter the value of n: ");
        scanf("%d", &n);
        for (int i = 3; s <= n; i += 2)
        {
            printf("%.f ", s);
            s += i;
        }
        break;
    case 98:
        for (int i = 1; i < 20; i++)
        {
            printf("%d/%d", i, i + 1);
            s += (float)i / (i + 1);
            if (i != 19)
            {
                printf(" + ");
            }
        }
        printf(" = %.2f", s);
        break;
    default:
        printf("Enter the correct option");
        break;
    }
    return 0;
}
