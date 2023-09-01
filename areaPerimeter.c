//Calculate area and perimeter of a rectangular plot.
#include<stdio.h>
int main(){
    float l,b,a,p;
    printf("Enter the Length anf Breadth of Rectangle:");
    scanf("%f%f", &l,&b);

    a=l*b; //area
    p= 2*(l+b); //perimeter

    printf("The area is %.2f and the perimeter is %.2f", a, p);
    return 0;
}
//Tip:You can solve other questions of circle or triangle using the same logic as above.
