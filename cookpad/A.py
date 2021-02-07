A,B = input().split()

count=1

result = []

while count <= len(B) and count <= len(A):
    if A[len(A)-count] == B[len(B)-count]:
        result.insert(0,A[len(A)-count])
        count+=1
        if count == len(A) +1 or count == len(B) + 1:
            print(''.join(result))
            break
    else:
        if len(result) > 0:
            print(''.join(result))
            break
        else:
            break