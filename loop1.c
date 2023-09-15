//Wrtie a C program to print the following sequence of int:
//-10  -12  -14  -18  -26  -42

#include<stdio.h>
int main(){
    printf("-10");
    for(int i=2;i<=32;i+=i)
    printf("  %d", -10-i);
}
