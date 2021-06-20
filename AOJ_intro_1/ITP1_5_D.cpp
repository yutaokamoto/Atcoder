#include <bits/stdc++.h>
//#include<atcoder/all>
//using namespace atcoder;
using namespace std;

vector<int> par;

int find(int x){
	if(par[x]==x)return x;
	return par[x] = find(par[x]);
}

int main(){
	int n;
	cin >> n;
	iota(par.begin(), par.end(), -1);
	par.resize(n);
	par[0] = 0;
	cout << find(1) << endl;
	return 0;
}
