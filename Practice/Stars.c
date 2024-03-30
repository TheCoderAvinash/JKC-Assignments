#include<stdio.h>

/*
*****
*****
*****
*****
*****
*/
void star1(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("*");
        printf("\n");
    }
}
/*
*
**
***
****
*****
*/
void star2(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
/*
*****
****
***
**
*
*/
void star3(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=5;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
}
/*
    *
   ***
  *****
 *******
*/
void star4(){
    int i,j,rows=5;
    for(i=0;i<rows;i++){
        for(j=0;j<2*rows -1;j++){
            if(j>rows-1-i &&j<rows-1+i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
/*
*********
 *******
  *****
   ***
    *
*/
void star5(){
    int i,j,rows=5;
    for(i=0;i<rows;i++){
        for(j=2*rows-1;j>0;j--){
            if(j<2*rows-i&&j>i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
/*
*****
 ****
  ***
   **
    *
*/
void star6(){
    int i, j,rows=5;
    for(i=0;i<rows;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=rows-i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
/*
    *
   **
  ***
 ****
*****
*/
void star7(){
    int i, j,rows=5;
    for(i=0;i<rows;i++){
        for(j=rows-1-i;j>0;j--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
/*
*****
*   *
*   *
*   *
*****
*/
void star8(){
    int i,j,rows=5;
    for(i=0;i<rows;i++){
        if(i!=rows-1 && i!=0){
            for(j=0;j<rows;j++){
                if(j>0 && j<rows-1) printf(" ");
                else printf("*");
            }
        }
        else{
            for(j=0;j<rows;j++) printf("*");
        }
        printf("\n");
    }
}

int main(){
    star1();
    star2();
    star3();
    star4();
    star5();
    star6();
    star7();
    star8();
}
