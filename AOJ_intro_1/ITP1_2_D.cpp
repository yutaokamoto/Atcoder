#include <bits/stdc++.h>
using namespace std;

int main(){
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	bool f = true;
	// x方向のチェック
	if(x-r<0 || W<x+r){f = false;}
	// y方向のチェック
	if(y-r<0 || H<y+r){f = false;}

	if(f){cout << "Yes" << endl;}
	else{cout << "No" << endl;}
	return 0;
}
