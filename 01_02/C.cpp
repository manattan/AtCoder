#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    int N;
    cin >> N;
    unordered_map<string,int> mp; 
    for (int i=0;i<N;i++){
        string en;
        cin >> en;
        mp[en] = i;
    }

    for (auto tmp = mp.begin();tmp!=mp.end();tmp++){
        string res = "!" + tmp -> first;
        auto isEnt = mp.find(res);
        if (isEnt !=mp.end()){
            cout << tmp -> first << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;
    return 0;
}