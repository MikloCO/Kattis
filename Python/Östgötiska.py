#https://open.kattis.com/problems/ostgotska
a_list = input().split()
count = 0

for x in range(len(a_list)):
    if 'ae' in a_list[x].lower():
        count += 1

print("dae ae ju traeligt va" if count / len(a_list) >= 0.4
      else "haer talar vi rikssvenska")
