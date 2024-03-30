//Write a C program to convert distance(km) into meters and centimeters.
#include<stdio.h>
int main(){
    float dis,meters,centis;
    printf("Enter the distance: ");
    scanf("%f", &dis); //input for distance

    meters= dis*1000;//converts to meters
    centis= meters*100;
    printf("Distance in km= %.2f\n", dis);
    printf("Distance in m= %.2f\n", meters);
    printf("Distance in cm= %.2f", centis);
return 0;
}
