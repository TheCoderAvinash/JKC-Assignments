/*Write a C program to find the largest of three numbers.
Test Data : 12 25 52

Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three*/


#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int num1, num2, num3;   // Declare three integer variables 'num1', 'num2', and 'num3'.

    printf("Input the values of three numbers : ");   // Prompt the user to input three numbers.
    scanf("%d %d %d", &num1, &num2, &num3);   // Read and store the user's input in 'num1', 'num2', and 'num3'.

    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);   // Print the values of 'num1', 'num2', and 'num3'.

    if (num1 > num2)   // Check if 'num1' is greater than 'num2'.
    {
        if (num1 > num3)   // Check if 'num1' is also greater than 'num3'.
        {
            printf("The 1st Number is the greatest among three. \n");   // Print a message indicating that 'num1' is the greatest.
        }
        else
        {
            printf("The 3rd Number is the greatest among three. \n");   // Print a message indicating that 'num3' is the greatest.
        }
    }
    else if (num2 > num3)   // If 'num1' is not the greatest, check if 'num2' is greater than 'num3'.
        printf("The 2nd Number is the greatest among three \n");   // Print a message indicating that 'num2' is the greatest.
    else
        printf("The 3rd Number is the greatest among three \n");   // If none of the above conditions are met, 'num3' must be the greatest.
}
