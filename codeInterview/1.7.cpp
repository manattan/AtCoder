#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int> > vec(N, vector<int>(N));
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> vec.at(i).at(j);
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cout << vec.at(N-j-1).at(i) << " ";
        }
        cout << endl;
    }

}