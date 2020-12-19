H, W = input().split()
H = int(H)
W = int(W)
arr = []
for i in range(H):
    a = input().split()
    arr.append(a)

arr2 = []
for i in range(H):
    for j in range(W):
        arr2.append(arr[i][j])

arr2 = sorted(arr2)
min = arr2[0]

res = 0
for i in range(len(arr2)):
    res += int(arr2[i]) - int(min)

print(res)