#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// お互いの文字列をソートして比較する, (多分)O(2NlogN) -> O(NlogN)
bool isSameBySort(string a, string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if (a==b) {
        return true;
    }else{
        return false;
    }
}

// 片方の文字列において, 同じ文字の数を数え, ハッシュテーブルにてインクリメントする
// 次にもう一方の配列でデクリメントし, どこかのkeyが負になったら同じではない, 全て0の配列になれば同じとみなせる. 
// O(2N)->O(N)
bool isSameByHash(string a, string b) {
    unordered_map<char, int> mp;
    for (int i=0;i<a.size();i++){
        mp[a.at(i)]++;
    }

    for (int i=0;i<b.size();i++){
        mp[b.at(i)]--;
        if (mp[b.at(i)] < 0) {
            return false;
        }
    }

    return true;

}


int main(){
    string a,b;
    cin >> a;
    cin >> b;

    cout << isSameBySort(a,b) << endl;
    cout << isSameByHash(a,b) << endl;
}