// https://atcoder.jp/contests/apg4b/tasks/APG4b_cc
#include <bits/stdc++.h>
using namespace std;

int count_report(vector<vector<int> > &children, int x) {
    vector<int> oneVec = children.at(x);

    if (oneVec.size() == 0) {
        return 1;
    }

    int sum=0;
    for (int i=0;i<oneVec.size();i++) {
        sum += count_report(children, oneVec.at(i));
    }

    return sum + 1;
}

int main(){
    int N;
    cin >> N;

    vector<int> p(N);
    p.at(0) = -1;

    for (int i=1;i<N;i++){
        cin >> p.at(i);
    }

    vector<vector<int> > children(N);
    for (int i=1;i<N;i++){
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    for (int i=0;i<N;i++){
        cout << count_report(children, i) << endl;
    }
}