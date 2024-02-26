//converts a number into it's binary form
#include<stdio.h>
int main(){
    int n,i=0, num,bin=0,b[16];
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    while(n!=0){
        b[i++]=n%2;
        n/=2;
    }
    for(i=i-1;i>=0;i--){
        bin=bin*10+b[i];
    }
    printf("%d is the binary form of %d",bin, num);
    return 0;
}
