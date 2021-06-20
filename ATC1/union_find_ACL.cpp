#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)

// 参考 : https://atcoder.jp/contests/atc001/tasks/unionfind_a

int main(){
	int n, q;
	cin >> n >> q;
	//Disjoint-set data structureの略
	dsu uf(n);
	int p, a, b;
	for(int i=0; i<q; i++){
		cin >> p >> a >> b;
		if(p==0){
			// 連結クエリ
			//uf.union_trees(a, b);
			uf.merge(a, b);
		}
		else if(p==1){
			// 判定クエリ
			//// 連結である
			//if(uf.judge(a, b)){cout << "Yes" << endl;}
			if(uf.same(a, b)){cout << "Yes" << endl;}
			//// 連結でない
			else{cout << "No" << endl;}
		}
	}
	return 0;
}
