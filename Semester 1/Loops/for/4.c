// Write a program to print the given sequence: s= 1+ 1/2 + 1/3 + ..... + 1/n
#include<stdio.h>
int main(){
    float s=0;
    int i, n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        s+= (float)1/i;
        printf("%.2f\n", s);
    }
    return 0;
}
