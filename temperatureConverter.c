//Write a C program for temperature conversion between Celcius and Farenheit
#include<stdio.h>
int main(){
    float c,f;
    int t;
    printf("Type 1 for Celcius to Farenheit\nType 2 for Farenheit to Celcius\nType:");
    scanf("%d",&t);
    switch(t){
        case 1:
        printf("Enter the value in Celcius:");
        scanf("%f", &c);
        f=((9*c)/5)+32;
        printf("The temperature in Farenheit is %.2fF", f);
        break;
        case 2:
         printf("Enter the value in Farenheit:");
        scanf("%f", &f);
        c=(5*(f-32))/9;
        printf("The temperature in Celcius is %.2fC", c);
        break;

    }
return 0;
}
