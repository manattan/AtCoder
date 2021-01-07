// https://atcoder.jp/contests/abc079/tasks/abc079_b
#include <bits/stdc++.h>
using namespace std;

// 計算量が莫大にかかります.
int64_t lucas(int N){
    if (N == 0){
        return 2;
    }

    if (N == 1){
        return 1;
    }

    return lucas(N-1) + lucas(N-2);
}

int main(){
    int N;
    cin >> N;
    int64_t ans=0;
    vector<int64_t> vec(3, 0);

    // ans = lucas(N);

    for (int i=0;i<=N;i++){
        if (i==0){
            vec.at(0) = 0;
            vec.at(1) = 0;
            vec.at(2) = 2;
            continue;
        }
        if (i==1){
            vec.at(0) = 0;
            vec.at(1) = 2;
            vec.at(2) = 1;
            continue;
        }

        vec.at(0) = vec.at(1);
        vec.at(1) = vec.at(2);
        vec.at(2) = vec.at(0) + vec.at(1);

    }

    ans = vec.at(2);
    cout << ans << endl;
}