# 入力
N, K = map(int, input().split())
NoUse = list(map(int, input().split()))

# 使う数字を決定する


def defineArrayToUse(arr):
    UseArr = []
    for i in range(10):
        isUsed = i in arr
        if not isUsed:
            UseArr.append(i)
    return UseArr


UseArr = defineArrayToUse(NoUse)

for i in range(N, 10000):
    isUsed = [0]*len(str(i))
    for j in range(len(str(i))):
        isUsed[j] = int(str(i)[j]) in UseArr
        # print(str(i)[j], isUsed)
    # print(i, isUsed)
    if 0 not in isUsed:
        print(int(i))
        break
