// https://atcoder.jp/contests/apg4b/tasks/APG4b_v
#include <bits/stdc++.h>
using namespace std;
 
// x番の組織について、子組織からの報告書が揃った時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int> > &children, int x) {
  // (ここに追記して再帰関数を実装する)
  vector<int> oneVec = children.at(x);

  if (oneVec.size() == 0) {
      return 0;
  }

  vector<int> time(oneVec.size());
  for (int i=0;i<oneVec.size();i++) {
      time.at(i) = complete_time(children, oneVec.at(i)) + 1;
  }

  sort(time.begin(), time.end());

  return time.at(time.size()-1);
}
 
// これ以降の行は変更しなくてよい
 
int main() {
  int N;
  cin >> N;
 
  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }
 
  // 組織の関係から2次元配列を作る(理解しなくてもよい)
  vector<vector<int> > children(N);  // ある組織の子組織の番号一覧  // N×0の二次元配列
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }
 
  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}