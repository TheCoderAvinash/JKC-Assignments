// Write a C Program to input marks of five subjects of a student and calculate total marks and percentage.
// Also find the division as per the following rule:
//(>=60%)1st division (<60 and >=45)2nd division (<45 and>=30)3rd divsion (<30)

#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,tot,perc;
    printf("The marks will be calculated on the basis of 100 as full marks.\nEnter the marks of 5 subjects:");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    tot=m1+m2+m3+m4+m5;
    perc= tot/5;

    printf("Your total score is %.2f and the percentage is %.2f \n", tot, perc);

    if(perc>=60)
    printf("Congratulations. You've cleared exam with 1st division.");
    else if(perc<60 && perc>=45)
    printf("Congratulations. You've cleared exam with 2nd division.");
    else if(perc<45 && perc>=30)
    printf("Congratulations. You've cleared exam with 3rd division.");
    else
    printf("Sorry but you've failed the examination");

return 0;
}
