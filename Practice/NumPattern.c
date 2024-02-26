/*
     1
    121
   12321
  1234321
*/
#include<stdio.h>
int main(){
    int i,j,rows=5,num;
    for(i=0;i<rows;i++){
        num=1;
        for(j=0;j<2*rows;j++){
            if(j>rows-i && j<rows+i){
                printf("%d", (j<rows?num++:num--));
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
