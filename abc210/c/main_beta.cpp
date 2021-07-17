#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

vector<int> c;
vector<int> color_set;

int count_num(int e, int l){
	int sec_e = e/pow(n, 0.5);
	int sec_l = l/pow(n, 0.5);
	if(sec_e==sec_l){
		
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	c.resize(n+1);
	int ind = 1;
	set<int> num_color;
	color_set.resize(pow(n, 0.5)+2);
	for(int i=1; i<=n; i++){
		cin >> c.at(i);
		num_color.insert(c.at(i));
		if(i==pow(n, 0.5)){
			color_set.at(ind) = num_color.size();
			num_color.erase(num_color.begin(), num_color.end())
			ind++;
		}
	}
	int ans = 0;
	for(int i=1; i<=n; i++){
		num = count_num(i, i+k);
		if(ans<num)ans = num;
	}
	cout << ans << endl;
	return 0;
}
