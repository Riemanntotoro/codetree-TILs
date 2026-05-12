lstA = list(map(int, input().split()))
lstB = list(map(int, input().split()))
val = 1 if lstA[0] > lstB[0] and lstA[1] > lstB[1] else 0
print(val)