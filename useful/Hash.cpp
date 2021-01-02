// http://vivi.dyndns.org/tech/cpp/unordered_map.html
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// あるkeyがそのhashtableの中に存在するかを返す関数, O(N)である. 
bool isContained(unordered_map<string,int> &mp, int x){
    for (auto tmp=mp.begin();tmp!=mp.end();tmp++){
        if (tmp ->second == x){
            return true;
        }
    }

    return false;
}

int main(){
    unordered_map<string, int> mp;
    mp["takanori"] = 990529;
    mp["arata"] = 991220;
    mp["sayoko"] = 990620;
    for (auto tmp= mp.begin(); tmp!= mp.end();tmp++ ){
        cout << "key: " << tmp ->first << " val: " << tmp ->second << endl;
    }
    cout << mp["takanori"] << endl;
    // abe は存在していないので, falseを返す. この検索は0(1)
    cout << mp["abe"] << endl;

    cout << isContained(mp,990529) << endl;
    cout << isContained(mp,980810) << endl;

    // ランダムな整数をkey と valにした時, 順に登録されていないことがわかる
    unordered_map<int,int > mpInt;
    for (int i=0;i<100;i++){
        mpInt[rand()] = rand();
    }
    for (auto tmp = mpInt.begin(); tmp !=mpInt.end(); tmp++){
        cout << "key: " << tmp->first << "  val: " << tmp->second <<endl;
    }
}