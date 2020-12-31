// https://atcoder.jp/contests/apg4b/tasks/APG4b_cf

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,S,res=0;
    cin >> N >> S;
    vector<int> apple(N);
    vector<int> pine(N);
    for (int i=0;i<N;i++){
        cin >> apple.at(i);
    }
    for (int i=0;i<N;i++) {
        cin >> pine.at(i);
    }

    sort(apple.begin(),apple.end());
    sort(pine.begin(),pine.end());

    for (int i = 0;i<N && apple.at(i) <= S ;i++){
        for (int j=0;j<N && apple.at(i) + pine.at(j) <= S ;j++){
            if (apple.at(i) + pine.at(j) == S){
                res++;
            }
        }
    }
    cout << res << endl;
}