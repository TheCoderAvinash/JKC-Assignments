//s= x^n or x raised to the power n
#include<stdio.h>
int main(){
    int i=1, x, n;
    float s=1;
    printf("Enter the values of x and n respectively: ");
    scanf("%d %d", &x, &n);
    while(i<=n){
        s*=x;
        i++;
    }
    printf("s=%.1f",s);
    return 0;
}
