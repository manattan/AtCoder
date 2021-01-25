#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i=0;i<N;i++) {
        cin >> v.at(i);
    }
    int maxRes = v.at(0);
    for (int i=0;i<N;i++) {
        int max = v.at(i);
        int j=i+1;
        if (i == N-1) {
            // cout << "終点" << endl;
            if (max > maxRes) {
                maxRes = max;
                continue;
            } else {
                break;
            }
        }
        if (max > maxRes) {
            maxRes = max;
            continue;
        }
        while (v.at(j) >= v.at(i)) {
            max+= v.at(i);
            j++;
            if (j==N) {
                break;
            }
        }
        if (max > maxRes) {
            maxRes = max;
        }
        // cout << "i =" << i << "max: " << maxRes << endl;
    }

    cout << maxRes << endl;
}