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
	int c_i;
	//vector<vector<int>> a(n);
	vector<vector<int>> cnt(n);
	vector<vector<int>> ans(n);
	rep(i, n){
		cin >> c.at(i);
		if(i==0)continue;
		for(int j=0; j<cnt.at(i-1).size(); j++){
			if(c.at(i)>=c.at(i-1)){
				cnt.at(i).push_back(c.at(i) - (cnt.at(i-1).at(j) + 1));
			}
			else{
				cnt.at(i).push_back(c.at(i) - cnt.at(i-1).at(j));
				cnt.at(i).push_back(c.at(i) - (cnt.at(i-1).at(j) + 1));
			}
		}
		int p;
		// その桁までの掛け算
		for(int j=0; j<cnt.at(i-1).size(); j++){
			for(int k=0; k<cnt.at(i).size(); k++){
				p = (cnt.at(i-1).at(j)*cnt.at(i).at(j))/1000000007;
				ans.at(i).push_back(p);
			}
		}
		cout << ans << endl;
	}
	int answer = 1;
	for(int j=0; j<ans.at(n-1).size(); j++){
		answer *= ans.at(n-1).at(j);
	}
	cout << answer << endl;
	return 0;
}
