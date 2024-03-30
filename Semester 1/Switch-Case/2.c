//Converting the temperature(celcius to Farenheit and vice versa) using switch cases.
#include<stdio.h>
int main(){
    float t;
    int c;
    printf("Enter 1 for Celcius to Farenheit Conversion\nEnter 2 for Farenheit to Celcius Conversion\nYour choice: ");
    scanf("%d", &c);
    switch(c){
        case 1:
            printf("Enter the temperature(C): ");
            scanf("%f", &t);
            printf("The Temperature in Farenheit is %.2f F", 32+(9*t)/5);
            break;
        case 2:
            printf("Enter the temperature(F): ");
            scanf("%f", &t);
            printf("The Temperature in Farenheit is %.2f C", (5*(t-32))/9);
            break;
    }
}
