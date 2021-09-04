#https://open.kattis.com/problems/tripletexting
text_from_grandma = input()
totalinputlength = len(text_from_grandma)
word_length = (round)(totalinputlength / 3)

thirdwordindex = word_length * 2

countCorrectLetters = 0
for firstwordindex in range(0, word_length):
        secondwordindex = word_length + firstwordindex
        if text_from_grandma[firstwordindex] == text_from_grandma[secondwordindex]:
            countCorrectLetters += 1
            if countCorrectLetters == word_length:
                for x in range(0, word_length):
                    print(text_from_grandma[x], end='')
                exit()

countCorrectLetters = 0
for firstwordindex in range(0, word_length):
    if(firstwordindex != 0):
        thirdwordindex = thirdwordindex + 1

    if text_from_grandma[firstwordindex] == text_from_grandma[thirdwordindex]:
        countCorrectLetters += 1
        if countCorrectLetters == word_length:
            for x in range(0, word_length):
                print(text_from_grandma[x], end='')

countCorrectLetters = 0
thirdwordindex = word_length * 2
secondwordindex = word_length
rangestart = secondwordindex

for secondwordindex in range(rangestart, word_length * 2):
    if secondwordindex != rangestart:
        thirdwordindex = thirdwordindex + 1
    if text_from_grandma[secondwordindex] == text_from_grandma[thirdwordindex]:
        countCorrectLetters += 1
        if countCorrectLetters == word_length:
            for x in range(rangestart, word_length*2):
                print(text_from_grandma[x], end='')
