#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for (int i=0;i<N;i++){
        cin >> x.at(i) >> y.at(i);
    }

    int res = 0;
    for (int i=0;i<N-1;i++){
        for (int j=i+1;j<N;j++){
            double a;
            double sax,say;
            sax = x.at(j)-x.at(i);
            say = y.at(j)-y.at(i);
            if (sax == 0) {
                continue;
            }
            a = say/sax;
            if (-1 <= a && a<=1){
                res++;
            }
        }
    }

    cout << res << endl;
}