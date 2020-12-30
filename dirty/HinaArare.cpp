#include <bits/stdc++.h>
using namespace std;
// https://atcoder.jp/contests/abc089/tasks/abc089_b

int main() {
    int N;
    string arare;
    bool Y=false;
    cin >> N;
    for (int i=0;i<N;i++) {
        cin >> arare;
        if (arare == "Y") {
            Y = true;
        }
    }

    if (Y) {
        cout << "Four" << endl;
    }
    else if (!Y) {
        cout << "Three" << endl;
    }
}