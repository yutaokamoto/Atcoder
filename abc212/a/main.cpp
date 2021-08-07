#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int a, b;
	cin >> a >> b;
	if(b==0)cout << "Gold" << endl;
	else if(a==0)cout << "Silver" << endl;
	else cout << "Alloy" << endl;
	return 0;
}
