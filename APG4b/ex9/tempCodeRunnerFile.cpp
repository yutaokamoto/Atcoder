#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x*(a+b) << endl;

  int a2 = x*(a+b);
  cout << a2*a2 <<endl;

  int a3 = a2*a2-1;
  cout << a3 << endl; 
}