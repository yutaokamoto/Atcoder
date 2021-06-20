#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<n; i++)

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	rep(i,N){cin>>A.at(i);}
	// あくまでufの元はA_iなので、A_iの最大値が入るようにノードを用意しないといけない
	dsu uf(200005);
	int MAX_REP = (int)N/2;
	for(int i=0; i<MAX_REP; i++){
		//cout << A.at(i) << " " << A.at(N-1-i) << endl;
		uf.merge(A[i], A[N-1-i]);
	}
	ll ans = 0;
	for(auto tree : uf.groups()){
		ans += tree.size()-1;
	}
	cout << ans << endl;
	return 0;
}
