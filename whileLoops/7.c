//s= 1+ 1/2!+ 1/3!+....+1/n!

#include<stdio.h>
int main(){
    int n, i=1, f=1;
    float s=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(i<=n){
        f*=i;
        s+=(float)1/f;
        i++;
    }
    printf("%.3f", s);
    return 0;
}
