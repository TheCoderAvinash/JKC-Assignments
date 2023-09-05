/*s */

#include <stdio.h>
#include <string.h>
int main(){
    int cost;
    float discount;
    printf("Enter the Total Cost: ");
    scanf("%d", &cost);
    if(cost<=2000){
        discount = 5;
    }
    else if(cost<=5000){
        discount = 10;
    }

    else if(cost<=10000){
        discount = 15;
    }
    else{
        discount = 20;
    }

    printf("---Your Bill---\nTotal Cost: %d \nDiscount: %.1f%%\nGift:", cost, discount);
    return 0;
}
