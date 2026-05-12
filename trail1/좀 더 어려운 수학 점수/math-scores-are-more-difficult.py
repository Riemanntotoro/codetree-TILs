lstA = list(map(int, input().split()))
lstB = list(map(int, input().split()))

Am, Ae = lstA[0], lstA[1]
Bm, Be = lstB[0], lstB[1]

if lstA[0] > lstB[0]:
    print("A")
elif lstA[0] == lstB[0]:
    print("A" if lstA[1] > lstB[1] else "B")
else:
    print("B")