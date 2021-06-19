#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	set<int> d;
	for(int i=0; i<N; i++){
		int d_i;
		cin >> d_i;
		d.insert(d_i);
	}
	cout << d.size() << endl;
	/*auto itr = d.begin();
	cout << *itr << endl;
	for(int i=0; i<d.size(); i++){
		cout << *itr << endl;
		// イテレータはインクリメントする
		// ポインタの*(itr+i)のようには書けない
		if(i!=d.size()){itr++;}
	}*/
	return 0;
}
