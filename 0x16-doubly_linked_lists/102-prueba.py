#!/usr/bin/python3
n = 0
for a in range (1, 1000):
    for b in range (1, 1000):
        c= a*b                          #multiply a to b
        if int(str(c)[::-1]) == c:
            if (c > n):
                n = c
print(n, a, b)
