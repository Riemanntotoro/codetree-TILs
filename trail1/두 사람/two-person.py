A = list(input().split())
B = list(input().split())

A[0] = int(A[0])
B[0] = int(B[0])

val = 1 if (A[0] >= 19 and A[1] == "M" or B[0] >= 19 and B[1] == "M") else 0
print(val)