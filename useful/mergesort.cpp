#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

vi merge_sort(vi vec){
    if (vec.size() == 1) {
        return vec;
    }
    vi left(vec.begin(), vec.begin()+vec.size()/2);
    vi right(vec.begin() + vec.size()/2, vec.end());

    left = merge_sort(left);
    right = merge_sort(right);

    vi res(0);

    while (left.size() > 0 && right.size() > 0 ) {
        if(left.at(0) < right.at(0)){
            res.push_back(left.at(0));
            left.erase(left.begin());
        } else {
            res.push_back(right.at(0));
            right.erase(right.begin());
        }
    }

    if (left.size() == 0){
        res.insert(res.end(), right.begin(), right.end());
    } else if (right.size() == 0){
        res.insert(res.end(), left.begin(), left.end());
    }

    return res;
}

int main () {
    int N;
    cin >> N;
    vi vec(N);
    for (int i=0;i<N;i++) {
        cin >> vec.at(i);
    }

    vi ans(N);
    ans = merge_sort(vec);

    for (int i=0;i<N;i++){
        cout << ans.at(i) << " ";
    }

    cout << endl;
}