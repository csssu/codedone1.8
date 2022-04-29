
# Author: Amir Hossein Khaksar

a = [int(item) for item in input().split("+")]
 
b = []
x = a.count(1)
b.append(x)
y = a.count(2)
b.append(y)
z = a.count(3)
b.append(z)
h =[]
for i in range (x):
    h.append(1)
for i in range (y):
    h.append(2)
for i in range (z):
    h.append(3)
print(f"{'+'.join([str(item)for item in h])}")