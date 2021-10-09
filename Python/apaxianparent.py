#https://open.kattis.com/problems/apaxianparent
y_input = input().split()
list_of_vowels = ['a', 'i', 'o', 'u']

if y_input[0][-1] == 'e':
    print(y_input[0] + "x" + y_input[1])
elif y_input[0][-1] in list_of_vowels:
    print(y_input[0][:-1] + "ex" + y_input[1])
elif y_input[0][-2:] == 'ex':
    print(y_input[0] + y_input[1])
else:
    print(y_input[0] + "ex" + y_input[1])
