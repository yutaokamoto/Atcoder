#include <bits/stdc++.h>
//#include<atcoder/all>
//using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<n; i++)

int main(){
	int n, x;
	while(cin >> n >> x){
		if(n==0 && x==0){break;}
		int res = 0;
		int cnt = 0;
		for(int i=1; i<n+1; i++){
			for(int j=i+1; j<n+1; j++){
				res = x - (i + j);
				if(res<=j){break;}
				if((1 <= res && res <= n) && (res != i && res != j)){
					//cout << i << " " << j << " " << res << endl;
					cnt++;
				}
				/*
				cout << j << "番目" << endl;
				vector<int> v(n);
				iota(v.begin(), v.end(), 1);
				for(auto i : v){cout << i << " ";}
				cout << endl;
				// 要素を消す方針でいくと、今回は複数回削除を行うので配列の大きさが変わってしまいめんどくさい
				//v.erase(v.begin()+(i-1));
				//v.erase(v.begin()+(j-1));
				v.at(i-1) = x;
				v.at(j-1) = x;
				for(auto i : v){cout << i << " ";}
				cout << endl;
				cnt += binary_search(v.begin(), v.end(), res) ? 1 : 0;
				cout << endl;
				*/
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
