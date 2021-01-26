// https://atcoder.jp/contests/apg4b/tasks/APG4b_bx
#include <bits/stdc++.h>
using namespace std;
using b50 = bitset<50>;

b50 intersection(b50 A, b50 B) {
    return A & B;
}

b50 union_set(b50 A, b50 B) {
    return A | B;
}

b50 symmetric_diff(b50 A, b50 B){
    return A ^ B;
}

b50 subtract(b50 A, int x) {
    A.set(x,0);
    return A;
}

b50 increment(b50 A) {
    if (A.test(49)) {
        A <<=1;
        A.set(0,1);
        return A;
    } else {
        A <<= 1;
        return A;
    }
}

b50 decrement(b50 A) {
    if (A.test(0)) {
        A >>=1;
        A.set(49,1);
        return A;
    } else {
        A >>=1;
        return A;
    }
}

void print_set(b50 S){
    vector<int> result;

    for (int i=0;i<50;i++) {
        if (S.test(i)) {
            result.push_back(i);
        }
    }

    for (int i=0;i<result.size();i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << result.at(i);
    }

    cout << endl;
}

void add(b50 &A, int x) {
    A.set(x,1);
}

int main() {
    b50 A,B;
    int N;
    cin >> N;
    for (int i=0;i<N;i++) {
        int x;
        cin >> x;
        add(A, x);
    }

    int M;
    cin >> M;
    for (int i=0;i<M;i++) {
        int x;
        cin >> x;
        add(B,x);
    }

    string command;
    cin >> command;

    if (command == "intersection") {
        print_set(intersection(A, B));
    } else if (command == "union_set") {
        print_set(union_set(A, B));
    } else if (command == "symmetric_diff") {
        print_set(symmetric_diff(A, B));
    } else if (command == "subtract") {
        int x;
        cin >> x;
        print_set(subtract(A, x));
    } else if (command == "increment") {
        print_set(increment(A));
    } else if (command == "decrement") {
        print_set(decrement(A));
    }

    return 0;
}