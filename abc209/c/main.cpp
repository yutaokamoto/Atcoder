#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int n;
	cin >> n;
	vector<int> c(n);
	ll ans = 1;
	rep(i, n){
		cin >> c.at(i);
	}
	sort(c.begin(), c.end());
	rep(i, c.size()){
		ans = ans*max(0, c.at(i)-i)%1000000007;
	}
	cout << ans << endl;
	return 0;
}
