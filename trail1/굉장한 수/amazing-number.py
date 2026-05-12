N = int(input())
res = "true" if (N%2==1 and N%3==0) or (N%5==0 and N%2==0) else "false"
print(res)