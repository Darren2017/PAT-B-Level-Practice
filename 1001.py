cnt = 0
n = raw_input()
n = int(n)
while n != 1:
    if n % 2 == 0:
        n /= 2
    else:
        n = (3 * n + 1) / 2
    cnt += 1
print cnt
