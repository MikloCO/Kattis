globalcounter = 0

a_list = []
buffering = input()

while buffering:
    a_list.append(buffering)
    buffering = input()

for i in range(len(a_list)):
    passwordstring = a_list[i]
    localcounter = 0

    elements = passwordstring.split()

    chunkone = elements[0].split("-")  # Get the correct min / max numbers.

    chunktwo = elements[1][:-1]  # delete the colon at the end and get the pattern.

    chunkthree = elements[2]

    for j in range(len(chunkthree)):
        if chunkthree[j] == chunktwo:
            localcounter += 1
    if int(chunkone[1]) >= localcounter >= int(chunkone[0]):
        globalcounter += 1

print("Correct answer is: ", globalcounter)

"""
The three chunks above represent below example: 
one   two   three
[1-3] [a:] [abcde]
"""
