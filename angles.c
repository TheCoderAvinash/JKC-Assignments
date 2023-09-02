/*Write a program to input three angles of a triangle and check whether the construction is possible or not.
If possible, then check and display whther it is an acute-angled triangle, right-angled or obtuse angled triangle.
Otherwise display'A Triangle is not possible'*/

#include <stdio.h>
int main(){
    float a1,a2,a3;
    printf("Enter the three angles of a triangle: ");
    scanf("%f%f%f", &a1,&a2,&a3);
    if(a1+a2+a3==180){
        if(a1<90&&a2<90&&a3<90)
        printf("This is an acute angled triangle");
        else if(a1==90||a2==90||a3==90)
        printf("This is a right angled triangle");
        else if(a1>90||a2>90||a3>90)
        printf("This is a obtuse angled triangle");
    }
    else
    printf("A triangle is not possible");
}
