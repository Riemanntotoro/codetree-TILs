Y = int(input())
res = "true" if (Y % 4 == 0 and Y % 100 != 0) or Y % 400 == 0 else "false"
print(res)