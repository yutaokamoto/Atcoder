#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
 
  int x = 1;
  for(int i=0; i<S.size(); i++){
      if(S.at(i) == '+'){
          ++x;
      }
      else if(S.at(i) == '-'){
          --x;
      }
  }
  cout << x << endl;

  return 0;
}