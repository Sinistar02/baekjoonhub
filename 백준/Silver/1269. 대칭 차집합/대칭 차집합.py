a, b = map(int,input().split())
aset = set(map(int,input().split()))
bset = set(map(int,input().split()))
rset = (aset | bset) - (aset & bset)
print(len(rset))
#암만 생각해도 파이썬 개날먹임 ㄹㅇ