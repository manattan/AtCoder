#include <bits/stdc++.h>
using namespace std;

int main(){
    int M,N;
    cin >> M >> N;

    vector<vector<int> > vec(N, vector<int>(M));
    vector<vector<int> > vec0(M*N, vector<int>(2));
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> vec.at(i).at(j);
        }
    }
    int index = 0;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (vec.at(i).at(j) == 0){
                vec0.at(index).at(0)= i;
                vec0.at(index).at(1)= j;
                index++;
            }
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (i == vec0.at(i).){
                cout << 0 << " ";
            } else {
                cout << vec.at(i).at(j) << " ";
            }
        }
        cout << endl;
    }
}