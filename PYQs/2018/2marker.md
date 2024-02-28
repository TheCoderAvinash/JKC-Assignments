# 1. What is the difference between Actual parameters and formal parameters?
## Ans: Formal Parameters are the variables used while defining and declaring of a function. e.g. `int Sum(int a, int b)`. Here a and b acts as formal parameters and the function will take integer values when it's called. On the other hand, Actual Parameters are the values that are supplied to the function when it is invoked. e.g. `Sum(5,4)`,where 5 and 4 are the actual parameters supplied to the function.

# 2. State the difference between 'call by value' and 'call by address'.
## Ans: These are two types of parameter passing into functions.
### Call by value: A copy of actual parameter is supplied to the the formal parameter of the function.
- There are two copies of parameters stored in different memory locations. One is the original copy and the other is the function's copy.
- Any change made to the function copy will not be reflected on the originial copy.
### Call by reference: The address of the actual parameter is passed to the function's formal parameter.
- There is only one copy of parameter stored in memory.
- Any change made to the parameter inside the function will get reflected to the actual parameter.

# 3. Write down the code segments for swapping two variables using pointer concept.
## Ans:
```
int i=10, j=5, *x,*y, temp;
printf("Pre-swap: %d-%d \n", i,j);
x= &i;
y= &j;
temp = *x;
*x=*y;
*y= temp;
printf("Post-Swap: %d-%d",i,j);
```

# 4. State the difference between entry controlled loop and exit controlled loop with suitable examples.
## Entry Control Loops:
- ### Test conditions are checked before entering the loop body.
- ### If the test condition fails, the loop body will not be executed
- ### Entry Control Loops are used when checking test conditions are mandatory, before the execution of loop body.
- ### Example: `for()`loop and `while()` loop
## Exit Control Loops:
- ### Test conditions are checked after exiting the loop body.
- ### Even if the test condition fails, the loop body will get executed atleast once.
- ### Exit Control Loops are used when test conditions are mandatory after the execution of loop body.
- ### Example: `do-while()` loop

# 5. What do you mean by macro?
## Ans: Macro in C language refers to a piece of code which can be replaced by it's macro value.
- ## It is defined with `#define` preprocessor.
- ## It doesn't end with the semicolon ; symbol.
- ### Macro is just a name given to a macro value, and it doesn't point to any memory location.
- ### `#define pi 3.14`, here preprocessor is `#define`, macro name is `pi`, and `3.14` is it's macro value.

# 6.What is the difference between break, continue and exit?
- ## `break;` is used to stop the complete process of the loop, `continue;` is used to the stop the current iteration of a loop, `exit(int status)` is used to stop the function.
- ## `break` and `continue` are reserved keywords and cannot be used as a variable name. `exit` is a predefined function so it can be used as a variable name.
- ## `break` and `continue` do not require any additional header file as they are pre-defined in `stdio.h`. `exit()` function requires the header file `stdlib.h`
- ## `break` can be used multiple times in a function but only once in a loop. `continue` can be used multiple times throughout the function including loops. `exit()` can be used only once in a function.

# 7. What is type casting or type conversion? Classify it with examples.
## Ans: Type-casting or type-conversion is done to change the variable's data type to another data-type as per the requirement. There are two types of type-casting: Implicit and Explicit
### Implicit type conversion is when the datatype is automatically changed to the higher order datatype(based on hierarchy of arithmetic conversion).It happens while writing the code.
```
int i=12;
float j=60.00, k;
k = j/i;
printf("k= %d",k);
//Output: k= 5.00
```
### Explicit Type Conversion also known as Type-casting is when we manually modify one variable to change it's datatype. It occurs during compilation.
```
int i=12;
float f;
f = (float)i;
printf("%d, %f",i,f);
//Output: i=12, f=12.000000
```

# 8. Write down the advantage of using pointers in C.
## Ans: `1`Pointers are helpful in accessing a memory location. `2`Pointers are useful for memory management, dynamic memory allocation and distribution. `3`Pointer gives an effective way to access to array structure elements.
