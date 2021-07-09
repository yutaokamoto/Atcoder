#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<n; i++)

/*int fractorial(int n){
	if(n==1)return 1;
	return n*fractorial(n-1);
}*/
int fractorial(int n){return n ? n*fractorial(n-1) : 1;}

int main(){
	int p;
	cin >> p;
	int ans = 0;
	for(int i=10; i>=1; i--){
		int yen = fractorial(i);
		ans += p/yen;
		p = p%yen;
	}
	cout << ans << endl;
	return 0;
}
