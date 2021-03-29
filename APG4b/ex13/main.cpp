#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for(int i=0; i<N; i++){cin >> A.at(i);}

  double ave = accumulate(A.begin(), A.end(), 0)/N;

  for(int i=0; i<N; i++){
      double d = (double)A.at(i)-ave;
      //cout << d << endl;
      if(d>=0){cout << d << endl;}
      else{cout << -d << endl;}
  }
}