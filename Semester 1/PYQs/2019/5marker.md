# 1. Explain 'Call by value' and 'Call by refernce' with examples.
## Ans: There are two methods of passing variable into functions when called, `1. Call by Value` and `2. Call by Reference`.
## `Call by Value`: A copy of actual parameters is passed to the function's formal parameters.
- ### There are two copies of the parameters stored in different memory locations.
- ### Change made inside the function won't be reflected to the actual parameters of the caller.
- ### This function is used when we need to pass small values that should not change.
```
#include<stdio.h>
void swap(int a, int b);
main(){
    int x=5,y=4, sum;
    swap(x,y);
    printf("Inside the caller: x=%d and y=%d", x,y);
}
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("Inside the function: a=%d and b=%d \n", a,b);
}
```
```
>>>Output
Inside the function: a=5 and b=4
Inside the caller : x=4 and y=5
```
## `Call by Reference` : The addresses of actual parameters are pased to the function's formal parameters.
- ### There is only one copy of the actual parameter i.e. the original one.
- ### Changes made inside the function will get reflected to the actual parameters.
- ### This method is perferred when we have to pass a large amount of data to the function.
```
#include<stdio.h>
void ptrSwap(int* a, int* b);
main(){
    int x=5,y=4, sum;
    ptrswap(x,y);
    printf("Inside caller: x=%d and y=%d", x,y);
}
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("Inside the function: a=%d and b=%d \n", *a,*b);
}
```
```
>>>Output
Inside the function: a=5 and b=4
Inside the caller: x=5 and y=4
```

# 2. What is recursion? Explain with example.
## Ans: When a function calls itself in order to perform a task is called as recursion, and those functions are called recursive functions.
- ### while recursive functions `reduce time and space` in coding, it can get `difficult to debug` the code due to complexity in the flow of execution.
- ### recursive functions tend to take `more memory` than it's non-recursive alternatives.

```
//Program to find the factorial of a number using recursion
#include<stdio.h>
int fact(int n);
main(){
    int x, fact;
    printf("Enter a positive number to find it's factorial: ");
    scanf("%d", &x);
    fact = fact(x);
    printf("Factorial of %d is %d",x,fact);
}
int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
```
```
>>>Output
Enter a positive number to find it's factorial: 5
Factorial of 5 is 120
```
### Working of a recursive function: In the above example, the recursive function computes the factorial of a positive integer supplied to it. Let's assume the input is 5. Inside the `fact()`, condition is checked whether the supplied number is 0 or 1 or not, if yes it returns 1. else it calls itself to find the factorial of the (n-1) and multiples it with n.
### `fact(5) -> 5*fact(4) -> 5*4*fact(3) -> 5*4*3*fact(2) -> 5*4*3*2*fact(1) -> 5*4*3*2*1` which is (in this case) 120.  *_fact(5) = 120_*

# 3. Discuss user defined/derived data types used in C.
## Ans: User-defined data types are generally a `collection of data with values that have a fixed meaning`. Unlike the pre-defined data types, these need to be `defined by the user` before it's declaration or usage. This data-type is `derived from the existing datatypes`.
## There are 4 types of user-defined datatypes: `Structure`,`union`,`enum`, and `typedef`
- ## `Structure` consists of related information regarding an object of particular datatype. Every data item is called a `member`. The size of structure is the sum of sizes of all datatypes in it. Syntax- `struct structure_name{ members; ...};`
- ## `Union` consists of unrelated datatypes. It may contain many members, but `only one member can be accessed at a time`. The size of union is the size of largest datatype in it. Syntax- `union union_name{members; ...};`
- ## `enum` is enumerated datatype. A special data type that contains values as elements. It allows giving symbolic names to represent a list of constants. Syntax - `enum enum_name{val1,val2,...};
- ## `typedef` is used to give alias name to predefined datatypes. Syntax- `typedef existing_dtype alias_name;` Example: `typedef float decimal; decimal mass=56.8;`
