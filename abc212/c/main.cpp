#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int ans = 1000000001;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<int> b(m);
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i=0; i<n; i++){
		auto nearly = lower_bound(b.begin(), b.end(), a.at(i));
		//if(nearly==b.end()){ans = abs(ans-*b.end())<ans ? abs(ans-*b.end()) : ans;}
		int temp_1 = abs(a.at(i)-*nearly);
		if(temp_1<ans)ans = temp_1;
		if(nearly!=b.begin()){
			int temp_2 = abs(a.at(i)-*(nearly-1));
			if(temp_2<ans)ans = temp_2;
		}
		//cout << a.at(i) << " " << *(nearly-1) << " " << *nearly << " " << ans << endl;
	}
	cout << ans << endl;
	return 0;
}
