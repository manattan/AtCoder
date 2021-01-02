N = int(input())

res = 0
for i in range(1,N+1,1):
    i = str(i)
    arr10 = []
    for j in range(len(i)):
        arr10.append(int(i[j]))
    isExist10 = 7 in arr10
    arr8 = []
    u = format(int(i),'o')
    u = str(u)
    for j in range(len(u)):
        arr8.append(int(u[j]))
    isExist8 = 7 in arr8
    if not isExist10 and not isExist8:
        res += 1

print(res)
    
