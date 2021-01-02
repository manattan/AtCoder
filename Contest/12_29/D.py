N = int(input())
a = input().split()

res = 0
for i in range(N):
    for j in range(len(a)-i-1):
        res += abs(int(a[i])-int([i+j+1]))

print(res)