def sumFromList(l):
    total = 0
    for i in l:
        total += l 
        return total
List = []
n = int(input("Enter the number of elements: "))
for i in range(n):
    e = int(input())
    List.append(e)

print(sumFromList(List))