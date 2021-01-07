// https://atcoder.jp/contests/apg4b/tasks/APG4b_ca
#include <bits/stdc++.h>
using namespace std;
using vpii = vector<pair<int,int> >;

vpii merge(vpii vec) {
    if (vec.size() == 1) {
        return vec;
    }

    vpii left(vec.begin(), vec.begin() + vec.size()/2);
    vpii right(vec.begin() + vec.size()/2, vec.end());
    left = merge(left);
    right = merge(right);

    vpii newArr(0);

    while (left.size() >=1 && right.size() >= 1) {
        if (left.at(0).second < right.at(0).second){
            newArr.push_back(left.at(0));
            left.erase(left.begin());
        } else {
            newArr.push_back(right.at(0));
            right.erase(right.begin());
        }
    }

    if (left.size() == 0){
        newArr.insert(newArr.end(), right.begin(), right.end());
    }else {
        newArr.insert(newArr.end(), left.begin(), left.end());
    }

    return newArr;
}

int main(){
    int N;
    cin >> N;

    vpii vec(N);

    for (int i=0;i<N;i++){
        cin >> vec.at(i).first >> vec.at(i).second;
    }

    vpii ans(N);

    ans = merge(vec);

    for (int i=0;i<ans.size();i++){
        cout << ans.at(i).first << " " << ans.at(i).second << endl;
    }
}