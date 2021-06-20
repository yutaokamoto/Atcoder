#include <bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	cin >> N;
	
	map<int, long long> A_map;
	// こうゆう入力の仕方もあるらしい
	// for(auto &nx : a){cin >> nx;}
	int A_i;
	long long cnt = (long long)((N-1)*N)/2;
	for(int i=0; i<N; i++){
		cin >> A_i;
		if(A_map.count(A_i)==0){A_map[A_i] = 1;}
		else{A_map[A_i] += 1;}
	}
	for(auto i : A_map){
		cnt -= (long long)((i.second-1)*i.second)/2;
	}
	cout << cnt << endl;
	
	/*
	set<int> A;
	int A_i;
	int M = A.size();
	auto iter = A.begin();
	for(int i=0; i<A.size(); i++){
		cout << *iter << endl;
		iter++;
	}
	int ans = (int)((M-1)*M)/2;
	cout << ans << endl;
	*/
	/*
	vector<int> A(N);
	int cnt = 0;
	for(int i=0; i<N; i++){
		cin >> A.at(i);
		for(int j=0; j<i; j++){
			if(A.at(j)!=A.at(i)){cnt++;}
		}
	}
	cout << cnt << endl;
	*/
	return 0;
}
