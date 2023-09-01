//To find the maximum and minimum of three numbers;
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf(" %d is max", a);
            if(b>c)
            printf("%d is min", c);
            else
            printf("%d is min", b);
        }
    }
    else{
        if(b>c){
            printf(" %d is max", b);
            if(a>c)
            printf("%d is min", c);
            else
            printf("%d is min", a);

        }
    }
return 0;
}
