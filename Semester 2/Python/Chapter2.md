# if-else
```
age = int(input("Enter Your Age: "))
if age>=18 :
		print("Adult")
		if age == 100:
				print("You're a century old!")
elif age<18 and age>13:
		print("Teen but not Adult")		
else:
		print("Kid")		
```		

# logical operators (and, or, not)
```
temp = int(input("Enter the temp"))
if temp>20 and temp<30:
		print("Go Outside")
elif temp<0 or temp>45:
		print("Stay Inside")
elif not(temp>0 and temp<30):
		print("Adventure Time")
else:
		print("Soja Bro")		
```		
		
# whileLoops
```
name = ""
while not(name.isalpha()):
		name = input("Enter you name ")
print("Hello "+name)		
```

# forLoops - PrimeChecker
```
prime = True
for i in range(100,200):
	if i%2==0:
			continue	
	for j in range(3,i):
			if i%j == 0:
					prime = False
	if prime:
			print(i)
```

# forLoops - Happy New Year
```
import time

for sec in range(10,0,-1):
	print(sec)
	time.sleep(1)
print("Happy New Year!")			
```

# lists - mutable
```
food = ["good day", "Chicken", "milk"]
for foo in food:
	print(foo)
#list methods
food.append("Rice") #appends at end
food.pop() #deletes the last element
food.insert(0,"Jalebi") #inserts Jalebi at 0th index
food.remove("Chicken") #removes Chicken
food.sort() #sorts the list (numerically, or alphabetically)
food.clear() #empties the list
```

# 2D Lists - mutable
```
drinks = ["coffee", "tea", "milk"]
dinner = ["chicken", "bread", "rice"]
desserts = ["sweets", "ice cream"]
food= [drinks, dinner, desserts]

print(food) #[["coffee", "tea", "milk"], ["chicken", "bread", "rice"], ["sweets", "ice cream"]]
print(food[2]) #["sweets", "ice cream"]
print(food[2][1]) #ice cream	
```

# tuple - immutable
```
student = ("AK", 18, "Male")
#tuple methods
student.count("AK")
student.index("Male")		
```

# Sets 
## unindexed, no duplicate values, sets is faster than lists if the main goal is to check if something exists...
```
utensils = {"fork", "spoon", "glass"}
dishes = {"bowl", "plate","cup"}
for x in utensils:
		print(x) #prints them in unordered manner	
#sets method
utensils.add("napkin") #adds napkin
utensils.remove("glass") #removes glass
utensils.clear()
utensils.update(dishes)	#adds dishes to utensils	
```