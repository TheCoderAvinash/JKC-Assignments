//s= x^n or x raised to the power n
#include<stdio.h>
int main(){
    int i, x, n;
    float s=1;
    printf("Enter the values of x and n respectively: ");
    scanf("%d %d", &x, &n);
    for(i=1;i<=n;i++)
    s*=x;
    printf("s=%.1f",s);
    return 0;
}
