//Wrtie a C program to print the following sequence of int:
//-10  -12  -14  -18  -26  -42

#include<stdio.h>
int main(){
    printf("-10");
    int i=2;
    while(i<=32){
    printf("  %d", -10-i);
    i+=i;
    }
}
