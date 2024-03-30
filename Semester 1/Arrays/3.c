//Input a string a reverse it
#include<stdio.h>
#include<string.h>
int main(){
    char name[50], rev[50];
    int i,len;
    printf("Input here: ");
    gets(name);
    len=strlen(name);
    for(i=0;name[i]!='\0';i++){
        rev[len-i]= name[i];
    }
    for(i=1;i<=len;i++){
        printf("%c", rev[i]);
    }
    return 0;
}
