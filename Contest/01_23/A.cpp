#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    char A = str.at(0);
    if (A == str.at(1) && A == str.at(2)) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }
}