#https://open.kattis.com/problems/pizza2
import math

r, c = map(int, input().split())
a = math.pi * (r - c)**2
b = math.pi * (r * r)

print((a/b) * 100)
