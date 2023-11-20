//1+3+5+7+9+...+n
#include<stdio.h>
int main(){
    int n, i=1, s=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do{
        s+=i;
        i+=2;
    }while(i<=n);
    printf("s= %d", s);
    return 0;
}




//1+4+25+36+...+n
#include<stdio.h>
int main(){
    int n,t, i=1, s=0, count=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do{
        if(count==2){
            i+=2;
            count=0;
        }
        count++;
        s+=t;
        t=i*i;
        i++;
        printf("%d + ", t);
    }while(t<n);
    return 0;
}


//x+x2/2!+x3/3!+...+n
#include<stdio.h>
int main(){
    int x, f=1,i=1,t=1, n;
    printf("Enter x and n:");
    scanf("%d%d", &x,&n);
    do{
        f*=x;
        t*=i;
        i++;
        printf("%d/%d  ",f,t);
    }while(i <= n);
}


//1+x+x2+x3+...+xn
#include<stdio.h>
#include<math.h>
int main(){
    int x, i=0, n;
    printf("Enter x and n:");
    scanf("%d%d", &x,&n);
    do{
        printf("%.2f  ", pow(x,i));
        i++;
    }while(i<=n);

}
