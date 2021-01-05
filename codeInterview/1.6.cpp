#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    string res;
    int count = 1;
    bool isSame = true;
    for (int i=0;i<str.size();i++){
        if (i==0){
            res = str.at(0);
        }
        if (i == str.size()-1){
            res = res + to_string(count);
            break;
        }

        if (str.at(i) == str.at(i+1)) {
            isSame = false;
            count++;
        } else {
            res = res + to_string(count) + str.at(i+1);
            count = 1;
        }
    }
    if (isSame){
        cout << str << endl;
    } else {
        cout << res << endl;
    }
}