from __future__ import print_function
a = input()
b = a / 100
a %= 100
c = a / 10 
d = a % 10
for i in range(b):
    print ('B', end = ''),
for i in range(c):
    print ('S', end = ''),
for i in range(1, d + 1, 1):
    print (i,end = ''),