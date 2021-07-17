#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int n, a, x, y;
	cin >> n >> a >> x >> y;
	int ans = 0;
	if(n<=a)ans = n*x;
	else{
		ans = a*x;
		ans += (n-a)*y;
	}
	cout << ans << endl;
	return 0;
}
