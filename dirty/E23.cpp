// https://atcoder.jp/contests/apg4b/tasks/APG4b_bz
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    unordered_map<int, int> mp;
    for (int i=0;i<N;i++){
        int key;
        cin >> key;
        mp[key]++;
    }

    int maxval = 0;
    int maxkey = 0;
    for (auto tmp = mp.begin(); tmp!=mp.end();tmp++){
        if (maxval < tmp -> second) {
            maxval = tmp -> second;
            maxkey = tmp -> first;
        }
    }
    cout << maxkey << " " << maxval << endl;

}