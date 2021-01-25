#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    double alco = 0;
    int num = 1;
    vector<int> index(N);
    vector<int> all(N);

    for (int i=0;i<N;i++){
        cin >> index.at(i) >> all.at(i);
    }

    while (num <= N) {
        alco+= index.at(num-1) * all.at(num-1);
        if (alco > M * 100) {
            cout << num << endl;
            return 0;
        }
        num+=1;
    }

    cout << -1 << endl;

}