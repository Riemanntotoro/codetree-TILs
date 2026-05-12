M = int(input())
res = "Winter"
if M >= 3 and M <= 5:
    res = "Spring"
elif M >= 6 and M <= 8:
    res = "Summer"
elif M >= 9 and M <= 11:
    res = "Fall"
print(res) 