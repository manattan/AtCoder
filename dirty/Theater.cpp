// https://atcoder.jp/contests/abc073/tasks/abc073_b
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int l,r;
    int sum = 0;
    cin >> N;
    for (int i=0;i<N;i++) {
        cin >> l>>r;
        sum += r-l+1;
    }
    cout << sum << endl;
}