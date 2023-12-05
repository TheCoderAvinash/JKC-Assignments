// Convert a decimal number into octal number
#include<stdio.h>
int main(){
    int dec,oct[16],i;
    printf("Decimal Form: ");
    scanf("%d", &dec);
    for(i=0;dec>0;i++){
        oct[i]=dec%8;
        dec/=8;
    }
    printf("Octal form: ");
    for(i=i-1;i>=0;i--){
        printf("%d", oct[i]);
    }
    return 0;
}
