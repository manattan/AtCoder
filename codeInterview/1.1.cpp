#include<bits/stdc++.h>
using namespace std;

bool isGood(string str) {
    unordered_map<char, int> mp;
    for (int i=0;i<str.size();i++){
        if (i==0){
            mp[str.at(0)] = 0;
            continue;
        }
        auto tmp = mp.find(str.at(i));
        if (tmp != mp.end()){
            return true;
        } else {
            mp[str.at(i)] = 0;
        }
    }

    return false;
}

int main(){
    string str;
    cin >> str;

    if (isGood(str)) {
        cout << "重複していました." << endl;
    } else {
        cout << "重複していませんでした." << endl;
    }
}