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
        char gift[] ="Calculator";
    }
    else if(cost<=5000){
        discount = 10;
        char gift[] = "School Bag";
    }

    else if(cost<=1000){
        discount = 15;
        char gift[] = "Wall Clock";
    }
    else{
        discount = 20;
        char gift[] = "Wrist Watch";
    }

    printf("Your Bill.\nTotal Cost: %d \nDiscount: %.1f\nGift: %s", cost, discount);
    return 0;
}
