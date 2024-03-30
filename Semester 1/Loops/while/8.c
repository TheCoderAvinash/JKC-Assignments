//Write a C Program to input 10 numbers and find the smallest number among them.
#include<stdio.h>
int main(){
    int n,i=2,c;
    printf("Enter value 1 : ");
    scanf("%d", &c);
    while(i<=10){
        printf("Enter value %d : ", i);
        scanf("%d", &n);
        if(c>n){
            c=n;
        }
        i++;
    }
    printf("The smallest number is %d.", c);
    return 0;
}
