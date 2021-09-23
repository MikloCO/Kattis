#https://open.kattis.com/problems/erase
deletion_amount = int(input())
file_1 = input()
file_2 = input()
counter = 0

for i in range(len(file_1)):
    if bool(int((file_1[i]))) ^ bool(int((file_2[i]))):
        counter += 1

if (counter == len(file_1)) or (deletion_amount % 2 == 0 and file_1 == file_2):
    print("Deletion succeeded")
else:
    print("Deletion failed")
