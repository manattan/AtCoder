#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    vector<string> res;

    getline(cin, str);
    for (int i=0;i<str.size();i++){
        if (str.at(i) == ' ') {
            res.push_back("%20");
            continue;
        }
        string into = { str.at(i) };
        res.push_back(into);
    }

    for (int i=0;i<res.size();i++){
        cout << res.at(i);
    }

    cout << endl;
}