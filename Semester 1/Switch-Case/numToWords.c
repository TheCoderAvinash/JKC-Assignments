//Write a C program to enter a number between 1 and 4 and print it in words using switch-case statement.

#include <stdio.h>
int main(){
    int n;
    printf("The number: ");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        default:
            printf("other number");
    }
}
