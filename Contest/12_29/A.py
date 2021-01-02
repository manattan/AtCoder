import sys

def main():
    N, W = input().split()
    N = int(N)
    W = int(W)
    if N < W:
        print(0)
        return
    a = 0
    while N >= W:
        N -= W
        a += 1
        
    print(int(a))

if __name__=="__main__":
    main()