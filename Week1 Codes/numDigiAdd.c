//Write a C programtaking a input of three digit number and adding all its digits as output.
//e.g.-> 345   ;   3+4+5=12

#include<stdio.h>
int main(){
    int n,h,t,o,s;
    printf("Enter a three digit number: ");
    scanf("%d", &n);

    o=n%10; //one's places
    t=(n/10)%10; //ten's place
    h= n/100; //hundred's place

    s=o+t+h; //sum
    printf("Their digit sum is %d", s);
    return 0;
}
