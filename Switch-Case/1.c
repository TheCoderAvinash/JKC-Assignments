//Write a C program to calculate area or perimeter by the radius inputted by the user. Use Switch Case.
#include<stdio.h>
int main(){
    float r;
    int op;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Enter 1 for Area calculation\nEnter 2 for Perimeter calculation\nYour choice:");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("The area is %.2f",3.14*r*r);
        break;
    case 2:
        printf("The perimeter is %.2f",3.14*2*r);
        break;
    default:
        printf("Wrong input. Try again");
        break;
    }
}

