#https://open.kattis.com/problems/heartrate
test_cases=int(input()) #testcase number
for i in range(test_cases):
    b, p = map(float, input().split())

    BPM = 60 * b / p;
    ABPM = BPM - (60 / p);
    ABPM_MAX = BPM + (60 / p);

    print("%.4f% .4f% .4f" % (ABPM, BPM, ABPM_MAX));
