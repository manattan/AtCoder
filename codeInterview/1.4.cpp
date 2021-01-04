#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    unordered_map<char, int> mp;
    for (int i=0;i<str.size();i++){
        char s;
        s = tolower(str.at(i));
        mp[s]++;
    }

    int amari=0;
    for (auto tmp = mp.begin();tmp!=mp.end();tmp++){
        if (tmp->second % 2 == 1){
            amari++;
        }
        if (amari == 2) {
            return false;
        }
    }

    if (amari == 0) {
        return false;
    } else {
        return true;
    }
}

int main(){
    string str;
    cin >> str;

    if (isPalindrome(str)){
        cout << "True" << endl;
        return 0;
    } else {
        cout << "False" << endl;
        return 0;
    }
}