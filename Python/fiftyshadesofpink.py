#https://open.kattis.com/problems/fiftyshades
a_list = []
test_cases = int(input())
count = 0

def countoccuranceofword(element):
    for x in range(1, len(a_list[i]) - 1):
        if a_list[i][x - 1:x + 3].lower() == 'rose' or 'pink':
            return 1
    return 0

for k in range(test_cases):
    element = str(input())
    a_list.append(element)

for i in range(len(a_list)):
    if 'rose' in a_list[i].lower() or 'pink' in a_list[i].lower():
        count += countoccuranceofword(a_list[i])

if count > 0:
    print(count)
if count <= 0:
    print("I must watch Star Wars with my daughter")
