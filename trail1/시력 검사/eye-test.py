a = float(input())
b = float(input())
if a >= 1.0 and b >= 1.0:
    val = "High"
elif a >= 0.5 and b >= 0.5:
    val = "Middle"
else:
    val = "Low" 
print(val)