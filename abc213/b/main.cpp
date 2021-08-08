#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int ans_val = 2000000000;
int ans;

int main(){
	int n;
	cin >> n;
	vector<vector<int>> a(n+1, vector<int>(2));
	for (int i = 1; i < n+1; i++){
		a.at(i).at(0) = i;
		cin >> a.at(i).at(1);
	}
	sort(a.begin(), a.end(), [](vector<int> p, vector<int> q){return p.at(1)>q.at(1);});
	cout << a.at(1).at(0) << endl;
	return 0;
}
