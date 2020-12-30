# include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    double A,B,c;
    double res, resDouble;
    cin >> a >> b;
    res = (a + b) / 2;
    A = a;
    B = b;
    resDouble = (A+B)/2;
    c = resDouble - res;
    cout << resDouble + c  << endl;  
} 