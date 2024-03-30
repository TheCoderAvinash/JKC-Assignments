/*Write a program to accept a number and check whether the number is divisible by 3 as well as 5. Otherwise, decide:
a. Is the number divisible by 3 and not by 5?
b. Is the number divisible by 5 and not by 3?
c. Is the number neither divisible by 3 nor by 5?*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%5==0 && a%3==0)
    printf("%d is divisible by both 3 and 5", a);
    else if(a%5==0 && a%3!=0 )
    printf("%d is divisible by 5 but not by 3", a);
    else if(a%5!=0 && a%3==0 )
    printf("%d is divisible by 3 but not by 5", a);
    else
    printf("%d is neither divisible by 3 nor by 5", a);

   return 0;
}
