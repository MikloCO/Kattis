a_list = []
thereisstillinput = input()

while thereisstillinput:
    a_list.append(int(thereisstillinput))
    thereisstillinput = input()

for i in range(len(a_list) - 1):
    for j in range(len(a_list) - 1):
        if a_list[i] + a_list[j + 1] == 2020:
            print(a_list[i] * a_list[j + 1])
            quit()


