// Strong Numbers: A number whose sum of factorials of it's digits is eqaul to the number.

#include<stdio.h>
int main(){
    int num, sum=0, n, i, x, fact;
    printf("Enter the number: ");
    scanf("%d", &num);
    n=num;
    while(n>0){
        fact=1;
        x=n%10;
        for(i=1;i<=x;i++){
            fact*=i;
        }
        n/=10;
        sum+=fact;
    }
    if(sum==num){
        printf("%d is a Strong Number", num);
    }
    else{
        printf("%d is not a Strong Number", num);
    }
    return 0;
}
