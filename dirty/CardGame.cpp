// https://atcoder.jp/contests/abc088/tasks/abc088_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> arr(N);

    for (int i =0;i<N;i++) {
        cin >> arr.at(i);
    }

    sort(arr.begin(), arr.end());
    bool alice = true;
    int pointsA=0;
    int pointsB = 0;
    while (arr.size() > 0){
        if (alice) {
            pointsA += arr.at(arr.size()-1);
            arr.pop_back();
            alice = false;
        } else {
            pointsB += arr.at(arr.size()-1);
            arr.pop_back();
            alice = true;
        }
    }

    cout << pointsA - pointsB << endl;
}