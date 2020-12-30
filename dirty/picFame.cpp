// https://atcoder.jp/contests/abc062/tasks/abc062_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W;
    string str;
    cin >> H >> W;
    vector<string> arr(H+2);
    for (int i = 0;i<H;i++) {
        cin >> str;
        arr.at(i+1) = str;
    }

    for (int i=0;i<W+2;i++) {
        arr.at(0) = arr.at(0) + "#";
    }
    for (int i=0;i<W+2;i++) {
        arr.at(arr.size() -1 ) = arr.at(arr.size() -1 ) + "#";
    }

    for (int i=1;i<H+1;i++) {
        arr.at(i) = "#" + arr.at(i) + "#";
    }

    for (int i = 0; i< arr.size();i++) {
        cout << arr.at(i) << endl;
    }
}