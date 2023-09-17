//s= 1+x+ x^2+ x^3.....+x^n


#include<stdio.h>
int main(){
    int x,n,t;
    float s=1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    t=x;
    for(int i=1;i<=n;i++){
    s+=t;
    t*=x;
    }
    printf("%.f", s);
    return 0;
}
