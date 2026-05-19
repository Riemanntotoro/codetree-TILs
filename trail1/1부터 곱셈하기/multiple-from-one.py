N = int(input())
prod = 1
mark = 0
for i in range(1, 11):
    prod *= i
    if prod >= N:
        mark = i
        break
print(mark)