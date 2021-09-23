deletion_amount = int(input())
file_1 = input()
file_2 = input()
file_1_length = str(file_1)
counter = 0

if deletion_amount % 2 == 0:
    if file_1 == file_2:
        print("Deletion succeeded")
    else:
        print("Deletion failed")
    quit()

for i in range(len(file_1)):
    if bool(int((file_1[i]))) ^ bool(int((file_2[i]))):
        counter += 1

if counter == len(file_1_length):
    print("Deletion succeeded")
else:
    print("Deletion failed")
