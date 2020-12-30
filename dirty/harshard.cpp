// https://atcoder.jp/contests/abc080/tasks/abc080_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, mainNum, subNum;
    cin >> N;
    mainNum = N;
    subNum = 0;
    while (N > 10){
        subNum += N % 10;
        N = N/10;
    }
    subNum += N;

    if (mainNum % subNum == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}