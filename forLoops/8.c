//Write a C Program to input 10 numbers and find the smallest number among them.
#include<stdio.h>
int main(){
    int n,i,c;
    printf("Enter value 1 : ");
    scanf("%d", &c);
    for(i=2;i<=10;i++){
        printf("Enter value %d : ", i);
        scanf("%d", &n);
        if(c<n){
            c=n;
        }
    }
    printf("The smallest number is %d.", c);
    return 0;
}
