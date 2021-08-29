#https://open.kattis.com/problems/romans
var = float(input())

one_mile = 1000 * (5280 / 4854)

answer = round(one_mile * var)

print(answer)
