a, b, c = map(int, input().split())
arr = [a, b, c]
five = 0
seven = 0

for i in range(3):
    if arr[i] == 5:
        five += 1
    elif arr[i] == 7:
        seven += 1

if five == 2 and seven == 1:
    print("YES")
else:
    print("NO")
