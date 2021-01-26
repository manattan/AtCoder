// https://atcoder.jp/contests/apg4b/tasks/APG4b_ac
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K;
    
    cin >> N >> K;
    
    vector<int> vec(N);
    for (int i=0;i<N;i++) {
        cin >> vec.at(i);
    }

    for (int tmp=0;tmp < (1<<N); tmp++) {
        bitset<20> s(tmp);

        int sum = 0;
        for (int i=0;i<N;i++) {
            if (s.test(i)) {
                sum += vec.at(i);
            }
        }

        if (sum == K) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}