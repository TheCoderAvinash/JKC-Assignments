//Salary Calculator
#include<stdio.h>
int main(){
    float bp, da,hra,ma,ta,gp,pf,np;
    //basic pay
    printf("Enter your basic pay:");
    scanf("%f", &bp);

    //calculation of allowances
    da=(24*bp)/100;
    hra=(15*bp)/100;
    ta=(10*bp)/100;
    ma=(5*bp)/100;

    //Gross Pay
    gp=bp+da+hra+ma+ta;

    //Provident Fund(to be deducted)
    pf=(5*bp)/100;

    //net pay or final salary
    np= gp-pf;

    printf("The Gross Salary is %.2f\n",gp);
    printf("The Provident Fund Fee is %.2f\n",pf);
    printf("The Final Salary is %.2f",np);
    return 0;
}
