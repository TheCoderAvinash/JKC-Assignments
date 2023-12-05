//s= 1+ 1/2!+ 1/3!+....+1/n!

#include<stdio.h>
int main(){
    int n, i, f=1;
    float s=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        f*=i;
        s+=(float)1/f;
    }
    printf("%.3f", s);
    return 0;
}
