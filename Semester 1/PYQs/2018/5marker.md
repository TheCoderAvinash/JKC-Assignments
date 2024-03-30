# 1. Write a program to illustrate Reading of data from a file.
## Ans: Let us assume there is a file named `sample.txt` which has 5 numbers{5,4,3,2,1}.
```
#include<stdio.h>
int main(){
    FILE* fp;
    int n;
    fp =  fopen("sample.txt", "r");
    printf("Rendered data: ");
    while(!feof(fp)){
        fscanf(fp,"%d", &n);
        printf("%d ", n);
    }
    fclose(fp);
}

```
## Output of the code above will be:
```
Rendered data: 5 4 3 2 1
```

# 2. Write a C-program that takes a positive number N and produces an output that is the product of its digits.
## Ans:
```
#include<stdio.h>
int main(){
    int N,prod=1;
    printf("Enter a positive number: ");
    scanf("%d", &N);
    while(N!=0){
        prod *= N%10;
        N/=10;
    }
    printf("Digit Product is %d", prod);
}
```
```
Enter a positive number: 69
Digit Product is 54
```

# 3. What do you mean by recursion? Write a C-program to find the factorial of a given number using recursion?

## Ans: Recursion is when a function calls itself to perform a certain task. It is often refered similar to the loops. One downside one using recursive function is, it makes the program slow. Following is the code to find the factorial of a given number using recursion.
```
#include<stdio.h>
int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter a number to find it's factorial: ");
    scanf("%d", &n);
    printf("%d! = %d",n,fact(n));
}
```
