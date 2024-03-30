//C program to print the area of different type of triangles

#include<stdio.h>
#include<math.h>
int main(){
    int t;
    float a,b,c,h,s;
    printf("Enter 1 for Right-angled Triangle\nEnter 2 for Regular Triangle\nEnter your choice: ");
    scanf("%d", &t);
    switch(t){
        case 1:
        printf("Enter the base and height of the triangle: ");
        scanf("%f%f", &b, &h);
        printf("The area is %.2f units", (float)b*h/2);
        break;
        case 2:
        printf("Enter the sides of the triangle(a,b,c): ");
        scanf("%f%f%f", &a, &b, &c);
        if(a+b>c && b+c>a && a+c>b){
            s=(a+b+c)/2;
            h= sqrt(s*(s-a)*(s-b)*(s-c));
            printf("The area is %.2f units", h);
            break;
        }
        else{
            printf("Triangle cannot be formed with the given sides");
            break;
        }
        default:
        printf("Please enter the correct option");
    }
}
