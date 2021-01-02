#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> twoTown(N, vector<int>(3));
    int sumAoki = 0;
    for (int i=0;i<N;i++){
        int a,b;
        cin >> a>>b;
        twoTown.at(i).at(0) = a;
        sumAoki += a;
        twoTown.at(i).at(1) = b;
        twoTown.at(i).at(2) = a + b;
    }


    sort(twoTown.begin(),twoTown.end(),[](const vector<int> &alpha,const vector<int> &beta ){
        if (alpha[2] == beta[2]) {
            return alpha[0] > beta[0];
        }
        return alpha[2] > beta[2];
    });

    int sumTakahashi=0;
    for (int i=0;i<N;i++){
        sumTakahashi+=twoTown.at(i).at(0)+twoTown.at(i).at(1);
        sumAoki -= twoTown.at(i).at(0);
        if (sumAoki < sumTakahashi) {
            cout << i+1 << endl;
            return 0;
        }
    }
}