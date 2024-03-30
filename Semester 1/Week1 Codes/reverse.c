//Input a two digit number and reverse it to generate the output
#include<stdio.h>
int main(){
    int num, o, t, r;
    printf("Enter a two digit number: ");
    scanf("%d", &num);

    o=num%10; //one's place
    t= num/10; //ten's place
    r=(o*10)+t; //reversed number

    printf("The reversed number is %d", r);
    return 0;

}
