//Checking whether a 3digit number is Armstrong number or not

#include<stdio.h>
int main(){
    int a, n, num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    while(n!=0){
        a= n%10;
        sum+=a*a*a;
        n/=10;
    }
    if(sum==num)
    printf("%d is an Armstrong number.", num);
    else
    printf("%d is not an Armstrong number.", num);

    /*(if you know how to use ternary operators, use the code below)
    printf("%d is %s", num, (sum==num?"an Armstrong number":"not an Armstrong number"));
    */
    return 0;
}
