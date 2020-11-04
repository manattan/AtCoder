N, L = map(int, input().split())
arr = ['']*N  # ソート前の配列
K = 0  # 何回比較するか
ans = ['']*N  # ソート後の配列

# 比較（文字列）


def comp(s, t):
    for i in range(L):
        if ord(s[i]) < ord(t[i]):
            for j in range(i+1):
                if s[j] != t[j]:
                    return 0
    return 1


# 文字列の入力
for i in range(N):
    while(1):
        arr[i] = input()
        if len(arr[i]) == L:
            break
        print('文字数エラーです、再度入力してください')
    K += i

for i in range(N):
    if i == 0:
        isChanged = comp(arr[0], arr[1])
        if isChanged:
            ans[0] = arr[1]
            ans[1] = arr[0]
        else:
            ans[0] = arr[0]
            ans[1] = arr[1]
        # print(ans)
    else:
        for j in range(len(ans)):
            # print(ans[i-j], arr[i+1])
            isChanged = comp(ans[i-j], arr[i+1])
            # print(isChanged)
            if not isChanged:
                ans.insert(i+1-j, arr[i+1])
                break
            if i+1-j == 1 and isChanged:
                ans.insert(0, arr[i+1])
                break
    if i == N-2:
        break
# print(ans)
print(''.join(ans))
