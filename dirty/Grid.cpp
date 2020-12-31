// https://atcoder.jp/contests/abc107/tasks/abc107_b
#include<bits/stdc++.h>
#include<ostream>
#include<vector>
#include<alloca.h>
using namespace std;

int main() {
    int N,M,yoko,tate;

    cin >> N >> M;
    vector<string> data(N);
    vector<string> data2(N);
    vector<bool> isDelYoko(N, true);
    vector<bool> isDelTate(M, true);
    

    for (int i=0;i<N;i++){
        cin >> data.at(i);
    }

    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++){
            if (data.at(i).at(j) != '.'){
                isDelYoko.at(i) = false;
                break;
            }
        }
    }

    for (int i=0;i<M;i++) {
        for (int j=0;j<N;j++) {
            if (data.at(j).at(i) != '.') {
                isDelTate.at(i) = false;
                break;
            }
        }
    }

    int k=0;
    for (int i=0;i<N;i++){
        if (isDelYoko.at(i)){
            data.erase(data.begin() + i - k);
            k++;
        }
    }

    int m=0;
    for (int i=0;i<M;i++){
        if (isDelTate.at(i)){
            for (int j=0;j<data.size();j++){
                data.at(j).erase(data.at(j).begin() +i-m);
            }
            m++;
        }
    }

    for (int i=0;i<data.size();i++){
        cout << data.at(i) << endl;
    }
}