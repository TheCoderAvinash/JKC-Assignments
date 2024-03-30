#include<stdio.h>
int main(){
  int c=65;
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for(k=0;k<i;k++)
            printf("%c",c++);
        c--;
        for(l=1;l<i;l++)
            printf("%c",--c);
        printf("\n");
        c=65;
    }
return 0;
}
/*Expected Output
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
