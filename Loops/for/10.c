//Write a C program to ask input and read 10 numbers and count number of positive numbers, negative numbers, and zeroes.
#include<stdio.h>
int main(){
    int n,pos=0,neg=0,zero=0;
    for(int i=1;i<=10;i++){
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        if(n>0)
        pos++;
        else if(n<0)
        neg++;
        else
        zero++;
    }
    printf("There are %d positive numbers, %d negative numbers, and %d zeros in given inputs.", pos, neg, zero);
    return 0;
}
