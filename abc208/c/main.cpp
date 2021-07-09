#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<ll, ll> ans;
    for (int i = 0; i < n; i++){
        cin >> a.at(i);
        ans[a.at(i)] = 0;
    }
    vector<int> sorted_a(a);
    sort(sorted_a.begin(), sorted_a.end());
    ll q = k/n;
    ll r = k%n-1;
    //cout << a.at(r) << endl;
    for(int i=0; i<ans.size(); i++){
        ans[a.at(i)] += q;
        if(i<=r)ans[sorted_a.at(i)]++;
    }
    for (int i = 0; i != a.size(); i++) {
        cout << ans[a.at(i)] << endl;
    }
    
	return 0;
}
