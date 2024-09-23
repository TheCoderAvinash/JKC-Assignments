//Write a C program that converts number of years into 1) minutes 2)hours 3)days 4)months and 5)seconds using switch statements.
#include <stdio.h>
int main(){
    int years, days, hours, minutes, seconds;
    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    switch(1){
        case 1:
            printf("%d years is equal to %d minutes, %d hours, %d days, and %d seconds.\n", years, minutes, hours, days, seconds);
            break;
        default:
            printf("some other numbers");
    }
}
