//s= 1+x+ x^2+ x^3.....+x^n


#include<stdio.h>
int main(){
    int i=1,x,n,t;
    float s=1;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    t=x;
    while(i<=n){
    s+=t;
    t*=x;
    i++;
    }
    printf("%.f", s);
    return 0;
}
