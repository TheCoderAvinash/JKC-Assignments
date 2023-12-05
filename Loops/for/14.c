/*Write a C program to input two unewual positive numbers and check whther they are perfect square numbers or not.
If the user enters any negative number, then the program displays the message
" square root of a negative number cannot be detemined."*/

#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    float sqa,sqb;
    printf("Enter two unequal positive numbers: ");
    scanf("%d%d", &a, &b);
    if((a>0 && b>0)&&(a!=b)){
        sqa= sqrt(a);
        for(int i=1;i<=a/2;i++){
            if(sqa==i){
                printf("%d is perfect square number\n", a);
            }
        }
        sqb= sqrt(b);
        for(int i=1;i<=b/2;i++){
            if(sqb==i){
                printf("%d is perfect square number\n", b);
            }
        }
    }
    if(a<0 || b<0)
    printf("Square root of a negative number cannot be determined");
    else if(a==b)
    printf("Please enter two unequal numbers");
}
