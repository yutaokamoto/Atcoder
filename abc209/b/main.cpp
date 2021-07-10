#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int n, x;
	cin >> n >> x;
	bool f = true;
	int sum = 0;
	int a;
	for(int j=1; j<=n; j++){
		cin >> a;
		if(j%2==0){sum--;}
		sum += a;
		if(x<sum || (x==sum && j!=n)){
			f = false; break;
		}
	}
	cout << (f ? "Yes" : "No") << endl;
	return 0;
}
