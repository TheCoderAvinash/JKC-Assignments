//Duck Numbers- a number that contains 0 as it's digit is a duck number.

//Q.Print all duck numbers between lower limit and upper limit(both included) which will be given by the user.
#include<stdio.h>
int main(){
    int a, b,i,n, d, flag;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d%d", &a, &b);
    for(i=a;i<=b;i++){
    n=i;
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
    printf("%d  ",i);
    }
    return 0;
}
