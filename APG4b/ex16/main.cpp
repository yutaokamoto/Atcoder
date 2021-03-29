#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  int prev = -1;
  bool flag = false;
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
    if(prev == data.at(i)){
        flag = true;
    }
    prev = data.at(i);
  }
 
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  if(flag){cout << "YES" << endl;}
  else{cout << "NO" << endl;}
}