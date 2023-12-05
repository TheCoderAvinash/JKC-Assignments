// Write a program to print the given sequence: s= 1+ 1/2 + 1/3 + ..... + 1/n
#include<stdio.h>
int main(){
    float s=0;
    int i=1, n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while(i<=n){
        s+= (float)1/i;
        i++;
    }
    printf("%.2f\n", s);
    return 0;
}
