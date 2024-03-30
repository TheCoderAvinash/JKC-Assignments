//to check whether a number is prime or not
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,np=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    n=abs(n);// stores the absolute value of n i.e. |n| => modulus of n
    if(n>3){
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                np=0;
                break;
            }
        }
    }
    if(np) printf("%d is prime", n);
    else printf("%d is not prime", n);
    return 0;
}
