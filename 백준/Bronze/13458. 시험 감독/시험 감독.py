testroom = int(input())
a = list(map(int,input().split(' ')))
b,c = map(int,input().split(' '))

r = 0
for i in range(testroom):
    if b >= a[i]:
        r+=1
        continue
    else:
        r+=1
        a[i] -= b
        r += a[i]//c
        if a[i]%c != 0:
            r += 1
print(r)
