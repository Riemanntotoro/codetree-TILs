def game(i):
    a = i // 100
    i = i % 100

    b = i // 10
    c = i % 10

    if b == 3 or c == 3 or b == 6 or c == 6 or b == 9 or c == 9 or i % 3 == 0:
        return 0
    else:
        return i

N = int(input())
for i in range(1, N+1):
    print(game(i), end=" ")