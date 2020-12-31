// https://atcoder.jp/contests/apg4b/tasks/APG4b_ch

#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b, int c){
    return a*b*c;
}

int sum(vector<int> vec) {
    int sum=0;

    for (int i=0;i<vec.size();i++){
        sum += vec.at(i);
    }

    return sum;
}

vector<int> input(int N) {
    vector<int> vec(N);

    for (int i=0;i<N;i++) {
        cin >> vec.at(i);
    }

    return vec;
}

int main(){
    int N;
    cin >> N;

    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    int sumA = sum(A);
    int sumB = sum(B);
    int sumC = sum(C);

    int res = calc(sumA,sumB,sumC);

    cout << res << endl;
}