#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int x;
	cin >> x;
	vector<int> x_l(4);
	int x1, x2, x3, x4;
	for(int i=0; i<4; i++){
		x_l.at(3-i) = x%10;
		x /= 10;
	}
	//cout << x_l.at(0) << endl;
	int prev = -1;
	bool same_flag = true;
	bool one_flag = true;
	for(int i=0; i<4; i++){
		if(i!=0 && prev!=x_l.at(i))same_flag = false;
		if(i!=0 && (prev+1)%10!=x_l.at(i))one_flag = false;
		prev = x_l.at(i);
	}
	cout << ((same_flag || one_flag) ? "Weak" : "Strong") << endl;
	return 0;
}
