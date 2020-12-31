// https://atcoder.jp/contests/apg4b/tasks/APG4b_cg

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(5);
    for (int i=0;i<5;i++){
        cin>>vec.at(i);
    }

    for (int i=0;i<4;i++){
        if (vec.at(i) == vec.at(i+1)){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}