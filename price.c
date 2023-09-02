/*Write a program to input the cost price and the selling price of an article. If the selling is more than the cost price,
then calculate and display the actual profit and the profit percentage otherwise, calculate and display the actual loss and loss percent.
If the cost price and the selling price are equal,the program displays the message 'Neither profit nor loss'*/

#include <stdio.h>
int main(){
    float cp,sp,p,l;
    printf("Enter the Cost Price and the Seling price: ");
    scanf("%f%f", &cp,&sp);
    if(sp>cp){
        printf("Profit earned.");
        p= 100*(sp-cp)/cp;
        printf("Profit amount is %.2f and is %.2f percent of the Cost Price",sp-cp,p);
    }
    else if(sp<cp){
        printf("Loss faced.");
        l= 100*(cp-sp)/cp;
        printf("Profit amount is %.2f and is %.2f percent of the Cost Price",cp-sp,l);
    }
    else
    printf("Neither Profit nor Loss");

return 0;
}
