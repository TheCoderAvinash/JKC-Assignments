# 1. Give the difference between compiler and interpreter.
## Compiler
- ### The complete code is first translated to object code, and the compiled as a whole.
- ### Translation and execution does not happen parallely.
- ### It stores the object code into memory.
- ### It is faster than interpreter because once the code is compiled it does not require the source code to be translated again.
- ### It is tough to debug the code.
## Interpreter
- ### Every line of code is individually translated and executed.
- ### Translation and execution happens parallely.
- ### It does not have any object code.
- ### It is slower than compiler because the source code is required to be translated each time.
- ### It is easier to debug the code.

# 2. What is macro? Give example.
## Ans: Macro refers to a piece of code that can be replaced with it's macro value, through the program. It is defined by `#define` preprocessor and it does not require ; semicolon in the end.
### Syntax - `#define macro_name = macro_value`
### Example - `#define pi = 3.14`

# 3. What is the difference between `++i` and `i++`?
- ### `++i` is under pre-incremental operator, whereas `i++` is under post-incremental operator
- ### `++i` will be increment the value first, then allow it to be used. On the contrary, `i++` will allow to use the value first and then increment it.

# 4. Give two features of algorithm.
## Ans: An algorithm must be `effective` and `finite`. i.e. it must perform the task effectively and must terminate at a point. It must be `independent of programming language` and have `definitiveness` i.e. steps must be defined and clear.

# 5. What is 2D Array?
## Ans: An Array which spans in both rows and columns is said to be a 2D array.
### Syntax- `data_type var_name[rows][columns];`
### Example - `int matrix[3][4]`
## 2D array provides ease of holding the bulk of data which can be passed to any number of functions when required.

# 6. What is data file?
## Ans: A file that contains a structured data which can be used to store or retrieve information, is called a data file. It can be a text file or a binary file. Text files contains data in the form of ASCII charcters. Binary files contain data in the Binary form.

# 7. What is ternary operator?
## Ans: Ternary operators are conditional statements, having the same algorithm as if-else statements, but takes takes less space and perform them if-else task in the shortest way possible. Syntax- `variable = expression1 ? expression2 : expression3` where expression1 represents the test-case, expression2 will be expressed if test-case is passed, expression3 will get expressed if it fails.
```
int i=5, j=4;
printf("%d", (i>j)?j:i); // if i>j, j will be printed, else i will be printed.
```

# 8. What is the difference between break, continue, and exit?
## Ans: Following are the differences among the three-
- ### `break;` is used to terminate the loop, `continue;` is used to skip the current iteration, `exit()` is used to terminate the function.
- ### `break;` can be used only once per loop, `continue;` can be used multiples times in a loop or throughout the code, `exit()` can be used only once per function.
- ### `break;` and `continue;` do not require any other header file as they're pre-defined in `stdio.h` but `exit()` require `stdlib.h` file to be included in order to be used.


