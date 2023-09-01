//Write a C program to convert distance(km) into meters and centimeters.
#include<stdio.h>
main(){
    float dis,meters,centis;
    printf("Enter the distance");
    scanf("%f", &dis); //input for distance

    meters= dis*1000;//converts to meters
    centis= meters*100;
    printf("Distance in km= %f", dis);
    printf("Distance in m= %f", meters);
    printf("Distance in cm= %f", centis);

}
