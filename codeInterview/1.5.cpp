#include <bits/stdc++.h>
using namespace std;

bool isReplaced(string x, string y){
    int defferentChar = 0;
    for (int i=0;i<x.size();i++){
        if (x.at(i) != y.at(i)){
            defferentChar++;
        }

        if (defferentChar == 2) {
            return false;
        }
    }

    return true;
}

bool Comp(string x, string y, int index){
    for (int i=index;i<y.size();i++){
        if (x.at(i+1)!= y.at(i)){
            return false;
        }
    }

    return true;
}

bool isInsert(string x, string y){
    for (int i=0;i<y.size();i++){
        if (x.at(i) != y.at(i)){
            int index = i;
            return Comp(x,y,index);
        }

        if (x.at(i) == y.at(i) && i == y.size()-1){
            return true;
        }
    }

    return false;
}

bool isChanged(string x, string y){
    long sa1 = x.size() - y.size();
    long sa = abs(sa1);
    if (sa!= 1 && sa != 0){
        return false;
    }
    if (x.size() < y.size()) {
        swap(x,y);
    }

    if (sa == 1) {
        return isInsert(x,y);
    } else {
        return isReplaced(x,y);
    }

}

int main(){
    string x,y;
    cin >> x >> y;

    if (isChanged(x,y)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}