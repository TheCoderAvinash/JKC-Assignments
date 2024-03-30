// finding the factorial of a number
#include<stdio.h>
int factorial(int x);
int main(){
    int i,n;
    // int fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial is %d", factorial(n));
    //if you want to use loops instead of recursive function, below is the code:
    // for(i=2;i<=n;i++){
    //     fact*=i;
    // }
    return 0;
}
int factorial(int x){
    if(x==0||x==1)
        return 1;
    else
    return x*factorial(x-1);
}
