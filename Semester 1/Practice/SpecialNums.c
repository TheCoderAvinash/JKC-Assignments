//Armstrong, Strong,Niven,Perfect Number
#include<stdio.h>
int power(int n, int p){
    int i,r=1;
    for(i=0;i<p;i++){
        r*=n;
    }
    return r;
}
int fact(int n){
    if(n==0||n==1) return 1;
    else return n*fact(n-1);
}
void Armstrong(int n){
    int i=0,d,p=0;
    int n1=n;
    while(n1!=0){i++; n1/=10;}
    n1=n;
    while(n1!=0){
        d = n1%10;
        p += power(d,i);
        n1/=10;
    }
    if(p==n) printf(" Armstrong number");
    else printf("not an Armstrong number");
}
void Strong(int n){
    int n1,f=0;
    n1=n;
    while(n1!=0){
        f+=fact(n1%10);
        n1/=10;
    }
    if(f==n) printf("Strong Number");
    else printf("not a Strong Number");
}
void Niven(int n){
    int n1,d=0;
    n1=n;
    while(n1!=0){
        d+=n1%10;
        n1/=10;
    }
    if(n%d==0) printf("Niven Number");
    else printf("not a Niven Number");
}
void Perfect(int n){
    int d=0,n1,i;
    n1=n;
    while(n1!=0){
        for(i=1;i<=n/2;i++){
            if(n%i==0) d+=i;
        }
        n1/=10;
    }
    if(n%d==0) printf("Perfect Number");
    else printf("not a Perfect Number");
}

int main(){
    Armstrong(153);
    printf("\n");
    Strong(145);
    printf("\n");
    Niven(126);
    printf("\n");
    Perfect(6);
    printf("\n");
}
