// Convert a decimal number into binary number
#include <stdio.h>
int main()
{
    int dec, bin[32], i = 0;
    printf("Decimal form: ");
    scanf("%d", &dec);
    while (dec>0)
    {
        bin[i] = dec % 2;

        dec= dec / 2;

        i++;
    }
    printf("Binary form: ");
    for( i=i-1;i>=0;i--){
        printf("%d", bin[i]);
    }

    return 0;
}
