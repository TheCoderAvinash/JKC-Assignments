// Converting Decimal to Hexadecimal
#include <stdio.h>
int main()
{
    char hex[100];
    int l,i=0,j, dec;
    printf(" Input here: ");
    scanf("%d", &dec);
    while(dec!=0){
        j= dec%16;
        if(j<10)
        j+=48;
        else
        j+=55;
        hex[i++]= j;
        dec/=16;
    }
    for(l=i-1;l>=0;l--)
    printf("%c", hex[l]);
    return 0;
}
