//Prints the sum of numbers between two numbers(including both)
#include<stdio.h>
int summing(int x,int y){//faster
    return ((y*y +y)/2)-((x*x +x)/2)+x; //runs on Constant time O(1); take the same time irrespective of number's size as long as it's within the constraints
}
int summing2(int x, int y){//slower
    int sum=0;
    for(int i = x;i<=y;i++){ //runs on Linear time O(n); not good for summing large numbers as it takes more time
        sum+=i;
    }
    return sum;
}
int main(){
    int a,b,sum, sum2;
    printf("Enter the starting number and ending number: ");
    scanf("%d%d", &a,&b);
    sum = summing(a,b);
    sum2 = summing2(a,b);
    printf("The sum is: %d and %d", sum, sum2);
}
