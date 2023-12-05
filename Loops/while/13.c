//Duck Numbers- a number that contains 0 as it's digit is a duck number.

//Q. Identify whether a given number is a duck number or not.
#include<stdio.h>
int main(){
    int n, num, d,flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    while(n>0){
        flag=1;
        d=n%10;
        if(d==0){
            flag=0;
            break;
        }
        n/=10;
    }
    if(flag==0)
    printf("%d is a duck number", num);
    else
    printf("%d is not a duck number", num);

    return 0;
}
