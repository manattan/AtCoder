// https://atcoder.jp/contests/abc061/tasks/abc061_b

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    vector<int> res(N);
    cin >> N >> M;
    for (int i=0;i<M;i++) {
        for (int j=0;j<2;j++){
            int inp;
            cin >> inp;
            res.at(inp-1)++;
        }
    }

    for (int i=0;i<N;i++){
        cout << res.at(i) << endl;
    }
    return 0;
}