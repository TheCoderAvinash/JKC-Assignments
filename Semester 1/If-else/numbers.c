/*Write a program to input three numbers and check whether they're equal or not. If they're unequal numbers, then display the greatest among them otherwise, display the message"All the numbers are equal."*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a,&b,&c);
    if(a!=b && b!=c && a!=c){
        if(a>b){
            if(a>c)
            printf("Greatest number: %d", a);
            else
            printf("Greatest number: %d", c);
        }
        else{
            if(b>c)
            printf("Greatest number: %d", b);
            else
            printf("Greatest number: %d", c);
        }
    }
    else
    printf("All numbers are equal");

return 0;
}
