#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int a, b;
	cin >> a >> b;
	if(b>=a)cout << (b-a)+1 << endl;
	else{cout << 0 << endl;}
	return 0;
}
