amount_of_days = int(input())
values = input().split()
best_day = -1
highest_temperature = -1

for x in range(amount_of_days-2):
    tmp = max(int(values[x]), int(values[x+2]))

    if best_day == -1 or tmp < highest_temperature:
        best_day = x+1
        highest_temperature = tmp

print(best_day, highest_temperature)
