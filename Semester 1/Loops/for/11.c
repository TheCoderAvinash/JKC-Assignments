/*
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
------Reverse------
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/

#include<stdio.h>
int main(){
    int row=5;
    for(int i=0; i<row;i++){
        for(int j=0;j<2*(row-i) -1 ;j++){
            printf(" ");
        }

        for(int k=0; k<2*i + 1;k++){
            printf("* ");
        }
        printf("\n");
    }


    //Now, to print the reverse of it
    printf("------Reverse------\n");


    int row2=5;
    for(int i=0; i<row2;i++){
        for(int j=0;j<2*i + 1 ;j++){
            printf(" ");
        }

        for(int k=0; k<2*(row2 -i) -1;k++){
            printf("* ");
        }
        printf("\n");
    }

}


/*
******
 *****
  ****
   ***
    **
     *
*/

#include<stdio.h>
int main(){
    int row=1;
    for(int i=6; i>=row;i--){
        for(int j=5;j>=i-1;j--){
            printf(" ");
        }

        for(int k=1; k<=i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}

/*
^^^^^^^
^^^^^^^
^^^^^^^
^^^^^^^
^^^^^^^
*/
#include<stdio.h>
int main(){
    for(int i=1;i<6;i++){
        printf("^^^^^^^\n");
    }
}
