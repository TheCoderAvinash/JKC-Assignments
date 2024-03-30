# 1. What will be the output of the code segment given below:
```
    int x = sizeof(float);
    printf("%d",x);
```
## Ans: 4. (The size of a float in 4 bytes.)

# 2. What do you mean by scope of a variable?

## Ans: The scope of a variable means the range of that variable in a program. There are broadly two scopes: Global and Local.
## 1. Global Variable: Variables that can be accessed anywhere throughout the program.
## 2. Local Variable: Variables that can be accessed only within the specified statement block.

# 3. What is a conditional operator?

## A Conditional operator is an operator used to specify conditions in aprogram. They can be used as `if-else` functions or `switch-case` functions.

# 4. Give an example of 'infinte loop'?
## Ans: Infinite loop is a type of loop that never ends, and keeps on running until the program is terminated. Code below is an example of infinite loop:
```
int i=20;
while(i>10){
    i++;
}
```

# 5. Find the length of string 'correct' in respect of C-Programming.
## Ans: In-built function such as `strlen()` can be used to find the length of a string. Or we can use the code below to find it's length without the in-built function.
```
int main(){
    int i;
    char str[]="correct";
    for(i=0;str[i]!='\0';i++);
    printf("Length of string: %d", i);
}
```

# 6. What will be the output of the code segment:
```
int i = –1, x;
x=(i<–1?–1:0);
printf ("%d", x);
```
## Ans: 0

# 7. Find the output of the following code segment:
```
for(i =1, j = 10; i<6; ++i, – – j)
printf ("%d%d", i, j);
```
## Ans: 110,29,38,47,56

# 8. How to calculate the size of a 'union' in respect of C?
## Ans: Using `sizeof(union_name)` will return the size of the union.

# 9. Assuming 'x' and 'y' to be integer variables, what will be their values after execution of the following statements?
```
 x=10;
 y=x++;
```
## Ans: x=11    y=10

# 10. What is pointer?
## Ans: A pointer is a variable that stores the address of another variable or data structure. Pointer are used to point the memory location that stores a value or object.

# 11. If two strings are identical, what is the return value of strcmp() function?
## Ans: `strcmp()` function reutrn the number of mismatched alphabets by comparing two strings. If both the strings are identical, `strcmp()` will return 0.

# 12. Which keyword is used to transfer control from a function back to the calling function?
## Ans: `return` keyword is used to transfer control from a function to the calling function.

# 13. What function should be used to free the memory allocated by malloc( ) or calloc( )?
## Ans: `free()` is used to free the memory allocated by malloc() or calloc().

# 14. What is the difference between constant and variable in C?
## Ans: Variables in C can be modifed and updated as per the requirement once declared, but constants cannot be modified once declared.

# 15. Input/output function prototypes and macros are defined in which header file?
## Ans: The header file `stdio.h` has  I/O function prototypes and macros defined in it.
