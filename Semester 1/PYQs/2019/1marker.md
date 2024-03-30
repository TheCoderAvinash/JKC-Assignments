# 1. What is array?
## Ans: Array is a systematic arrangement of similar objects, usually in rows and columns. It is declared by `data_type variable_name[array_length]`

# 2. What do you mean by variable?
## Ans: Variable is a data item which can be modified/altered as per requirement. Example: `int a;` where a is the variable

# 3. Tell the ASCII code of 'C'.
## Ans: ASCII Code for alphabet C is `67`.

# 4. What is a function?
## Ans: Functions are basic building block of a program. A set of statements elcosed within curly braces {}, that take some input, do the computations, and provide the output. A function can be called multiple times thus providing the scope of reusabilty.

# 5. Give output for the following code:
```
int n=8;
n=>>2;
printf("%d",n);
```
## Ans: Error. (Read bitwise right shift operator for explanation). `n>>=2` will replace `n=>>2` to give the output 2.

# 6. What is a pointer?
## Ans: Pointer is a trype of variable that stores the memory address of another variable or an object. We use the * asterisk mark to declare a pointer variable `int *ptr`

# 7. What is compiler?
## Ans: Compiler is a computer program that translates the written code to machine code, bytecode or another programming language.

# 8. What is a static variable?
## Ans: A variable which can preserve its value even after it is out of scope is a static variable. Syntax- `static data_type variable_name = variable_value;`

# 9. Give the syntax of `for()` loop.
```
Syntax:
    for(initialisation;test_condition;updation){
        //code to be executed
    }
```

# 10. What is union?
## Ans: Union is a pre-defined datatype in C programming language. It is a collection of variables which can be of different datatypes, and are stored in the same memory location.

# 11. What is the memory size of `long int` variable?
## Ans: Even though the size is based on the computer architecture but a 32-bit/64-bit system will have the size of `4 bytes` for a `long int`.

# 12. What is incremental operator?
## Ans: Incremental operator `++` are unary operator used to increment the value of the variable by 1. There are two types of Incremental operator.
- ### Pre-incremental operator: `++i` where value is incremented before it's usage
```
int i=2;
printf("%d",++i);
// Output: 3
```
- ### Post-incremental operator: `i++` where the value is incremented after it's usage
```
int i=2;
printf("before: %d",i++);
printf("after: %d",i);
// Output
    before: 2
    after:  3
```

# 13. Give an example of infinite loop.
## Ans: When a loop runs for indefinite period and doesn't terminate, it is referred as infinite loop.
```
int i=7;
while(i>0){
    i++;
}
```

# 14. What is the difference between Constant and variable in C?
## Ans: Variables can be modified when required, and it's value can be changed throughout it's scope. But constants cannot be modified and will retain their original value once assigned.
