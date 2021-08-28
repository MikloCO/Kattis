#https://open.kattis.com/problems/finalexam2
a_list = []
score = 0
test_cases = int(input())

for i in range(test_cases):
    element = str(input())
    a_list.append(element)

for i in range(len(a_list) - 1):
    if a_list[i] == a_list[i + 1]:
        score += 1

print(score)
