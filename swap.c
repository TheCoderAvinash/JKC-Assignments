//input two values and swap them without using 3rd variable

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %d\n", a);
    printf("b= %d", b);
    return 0;
}
