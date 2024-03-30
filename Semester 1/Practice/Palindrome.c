//palindrome number check
#include<stdio.h>
#include<stdlib.h>
void paliNum(int n){//to check whether a number is palindrome or not
    n=abs(n);
    int n2,r=0;
    if(n<10) printf("Palindrome check is not applicable for Single digits");
    else{
        n2=n;
        while(n2!=0){
            r=r*10+n2%10;
            n2/=10;
        }
        if(n==r) printf("Palindrome!");
        else printf("NOT a Palindrome.");
    }
}
void paliStr(char *str){//to check whether a string is palindrome or not
    int i=0,c=0;
    while(str[i++]!='\0');
    int j=i-2;
    i=0;
    while(str[i]!='\0'){
        if(str[(j--)]!=str[(i++)]){
            printf("NOT a Palindrome.");
            break;
        }
        c=1;
    }
    if(c) printf("Palindrome!");
}

int main(){
    paliNum(69);
    paliStr("malayalam");
    return 0;
}
