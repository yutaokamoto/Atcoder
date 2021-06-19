#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a;
	int maximize = -1000000;
	int minimize = 1000000;
	// 簡単な問題だと思って計算量を計算せず、intにしていた
	long summation = 0;
	for(int i=0; i<n; i++){
		cin >> a;
		if(a<minimize){minimize = a;}
		if(maximize<a){maximize = a;}
		summation += a;
	}
	cout << minimize << ' ' << maximize << ' ' << summation << endl;
	return 0;
}
