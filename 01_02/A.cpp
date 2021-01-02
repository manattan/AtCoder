#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    int n=0,m=0;
    cin >> N>> M;

    while(N>=10){
        n+= N%10;
        N/=10;
    }
    n+= N;

    while(M>=10){
        m+=M%10;
        M/=10;
    }
    m+=M;
    
    cout << max(n,m) << endl;
}