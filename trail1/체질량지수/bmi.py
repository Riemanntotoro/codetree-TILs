lst = list(map(int, input().split()))
h, w = lst[0], lst[1]
b = (10000 * w) / (h * h)
print(int(b))
if b >= 25:
    print("Obesity")