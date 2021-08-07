#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int q;
	cin >> q;
	map<long, long> bag;
	//auto iter = bag.begin();
	for(int i=0; i<q; i++){
		int query;
		cin >> query;
		//cout << query << endl;
		int x;
		if(query!=3){
			cin >> x;
			//cout << "\t" << x << endl << endl;
		}

		if(query==1){bag[x]++;}//iter = bag.begin();}
		else if(query==2){
			map<long, long> bag_copy;
			//for(auto j=iter; j!=bag.end(); j++){
			for(auto j=bag.begin(); j!=bag.end(); j++){
				long temp = j->second;
				bag_copy[(j->first)+x] = temp;
			}
			bag = bag_copy;
		}
		else if(query==3){
			long ans = bag.begin()->first;
			bag[ans]--;
			//if(bag[ans]==0){bag.erase(ans); iter++;}
			if(bag[ans]==0){bag.erase(ans);}
			cout << ans << endl;
		}
	}
	return 0;
}
