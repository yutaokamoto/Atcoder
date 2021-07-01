#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<n; i++)

int manhattan(int x,int y,int x_,int y_){
	return abs(x-x_)+abs(y-y_);
}

bool movable(int x,int y,int t,int x_,int y_,int t_){
	int dist = manhattan(x, y, x_, y_);
	int elapsed = abs(t-t_);
	if(dist>elapsed)return false;
	// dist==0ではなく、移動開始地点から目的地へ辿り着く際に余る時間が偶数の時(0も偶数) <- その場に止まれないため
	// テストケースが「移動開始地点から目的地へ辿り着く際に余る時間が偶数の時」
	// の特別な場合を表しているが、テストケースの一般形を考える!!
	if((elapsed-dist)%2==1)return false;
	return true;
	/*if(dist==0){
		if(elapsed%2==0)return true;
		else return false;
	}
	else if(dist<=elapsed)return true;
	return false;*/
}

int main(){
	int N;
	cin >> N;
	int t, x, y;
	int t_ = 0, x_ = 0, y_ = 0;
	bool f = true;
	rep(i, N){
		cin >> t >> x >> y;
		if(!movable(x, y, t, x_, y_, t_)){
			f = false;
			break;
		}
		x_ = x;
		y_ = y;
		t_ = t;
	}
	if(f)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
