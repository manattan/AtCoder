// https://atcoder.jp/contests/abc076/tasks/abc076_b

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K,res=1;
    cin >> N>>K;
    for (int i=0;i<N;i++) {
        if (res*2 >= res+K) {
            res = res+K;
        }
        else if (res+K > res*2) {
            res = res*2;
        }
    }

    cout << res <<endl;
}