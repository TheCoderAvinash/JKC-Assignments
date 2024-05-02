import array as ar 
a1 = ar.array('i', [])
n = int(input("size of array: "))
for i in range(n):
    e = int(input())
    a1.append(e)

print(*a1, sep=',')