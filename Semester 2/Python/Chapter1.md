# Variables, String methods, TypeCasting, input function, math module

Just like almost every other programming language, Python too has similar variables, `int` for integers, `float` for floating points or decimals, `str` for string, `bool` for boolean

```
#multiple assignments
#1. when all values are different
name,age,height,human = "Avinash",18,176.7,True
#2. when all have the same value
spongeBob = Patrick = Squidward = Sandy = 21
```

# String Methods
```
name = "Avinash"
print(name.find("A")) #returns the position index
print(name.replace("A","O")) #replaces the old word with new word
print(name.upper()) #UPPERCASES the string
print(name.lower()) #lowercases the string
print(name.isDigit()) #checks if string has digits or not, bool
print(name.isAlpha()) #checks if string has alphabets or not, bool
print(name.capitalize()) #capitalizes the first alphabet of string
print(name.count("a")) # counts the number of occurences of the letter
print(len(name)) # returns the length of the string
print(name*3) #prints the name thrice
```
# String Slicing and Indexing
```
#string slicing  ->   varName[start:stop:step] if you leave start and stop empty, Python would count it as beginning and end of the string
name = "Avinash Mallick"
fname = name[:7] #Avinash
lname = name[8:] #Mallick
funky = name[::2] #from beginning til end and prints every third character i.e. AiahMlik
revName = name[::-1] #reverses the string by indexing backwards
#slice() function
website = "https://google.com" 
slicey = slice(7,-4)
print(website[slicey]) #google
```


# TypeCasting
In Python, there are two types of typecasting, implicit and explicit. Implicit typecasting happens on it's own and does'nt require any additional syntax. Explicit typecasting is made when
we intentionally want to change the type of the variable. `int()`,`float()`,`str()` are used.

```
num = 5 #datatype-int
number = '5' #datatype - str
print(float(num)) #returns 5.0, which is a floating point
print(str(num)) #returns '5', which is a string (notice the quotations)
print(int(number)) #returns 5, which is an integer
```

# input function
There are times when we want to take input from the user, for that we use `input()` function
```
name = input("Enter your name: ")
```
input function converts everything to string before returning it. we can use typecasting as per our need
```
phone_number = int(input("Enter your phone number: "))
```

# Math Module
Just like `math.h` in C, `math` module in python serves the same purpose,i.e. mathematical calculations.
```
#Math Module
import math
pi = 3.14
a=1
b=2
c=3
print(round(pi)) #rounds up to the closest integer
print(math.ceil(pi)) #returns the smallest integer greater than it
print(math.floor(pi)) #returns the greatest integer smaller than it
print(math.sqrt(420)) #return the square root
print(pow(pi,2)) #return pi raised to the power 2
print(max(a,b,c)) #returns the max among them
print(min(a,b,c)) #returns the min among them
print(abs(pi)) #returns the absolute value |pi|mod of pi
```
# string slicing  ->   varName[start:stop:step] 
## if you leave start and stop empty, Python would count it as beginning and end of the string
```
name = "Avinash Mallick"
fname = name[:7] #Avinash
lname = name[8:] #Mallick
funky = name[::2] #from beginning til end and prints every third character i.e. AiahMlik
revName = name[::-1] #reverses the string by indexing backwards
#slice() function
website = "https://google.com" 
slicey = slice(7,-4)
print(website[slicey]) #google 
```