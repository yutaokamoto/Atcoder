#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

vector<int> c;
vector<set<int>> colors;

int main(){
	int n, k;
	cin >> n >> k;
	c.resize(n+1);
	for(int i=1; i<=n; i++){
		cin >> c.at(i);
	}
	int ans = 0;
	map<int, int> temp;
	for(int j=1; j<=k-1; j++){
		temp[c.at(j)]++;
	}
	int j = 1;
	for(int i=k; i<=n; i++){
		temp[c.at(i)]++;
		if(ans<(int)temp.size())ans = (int)temp.size();
		temp[c.at(i-k+1)]--;
		if(!temp[c.at(i-k+1)]){temp.erase(c.at(i-k+1));}
	}
	cout << ans << endl;
	return 0;
}
