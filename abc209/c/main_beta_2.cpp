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
	vector<vector<ll>> cnt(n);
	int p;
	rep(i, n){
		cin >> c.at(i);
		//cout << "c_i = " << c.at(i) << endl;
		if(i==0){
			cnt.at(i).push_back((ll)c.at(i));
			cnt.at(i).push_back(0);
			continue;
		}
		if(i==1){
			cnt.at(0).at(1) = c.at(i);
		}
		if(c.at(i-1) <= c.at(i)){
			// c_{i-1} <= c_iの時
			p = (ll)(c.at(i)-i)*cnt.at(i-1).at(0)%1000000007;
			//cout << "p0 = " << p << endl;
			cnt.at(i).push_back(p);
			p = (ll)(c.at(i)-i)*cnt.at(i-1).at(1)%1000000007;
			//cout << "p1 = " << p << endl;
			cnt.at(i).push_back(p);
		}
		else{
			// c_{i-1} > c_iの時
			p = (ll)(c.at(i-1)-c.at(i))*cnt.at(i-1).at(1)%1000000007;
			//cout << "p0 = " << p << endl;
			cnt.at(i).push_back(p);
			p = (ll)cnt.at(i-1).at(1)*(c.at(i)-i)%1000000007;
			//cout << "p1 = " << p << endl;
			cnt.at(i).push_back(p);
		}
	}
	cout << cnt.at(n-1).at(0)+cnt.at(n-1).at(1) << endl;
	return 0;
}
