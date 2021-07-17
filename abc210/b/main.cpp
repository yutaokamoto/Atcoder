#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int n;
	string s;
	cin >> n >> s;
	string t = "Takahashi";
	string a = "Aoki";
	int ind = -1;
	for(auto s_i : s){
		ind++;
		if(s_i=='1')break;
	}
	if(ind%2==0){cout << t << endl;}
	else{cout << a << endl;}
	return 0;
}
