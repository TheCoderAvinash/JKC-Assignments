//Write a C program to enter a number between 1 and 9 and print it in romans using switch-case statement.
#include <stdio.h>
int main(){
        int n;
    printf("The number: ");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        default:
            printf("some other numbers");
    }
}
