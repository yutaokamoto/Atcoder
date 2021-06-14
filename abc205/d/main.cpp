#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, Q;
	cin >> N >> Q;
	vector<long> A(N);
	for(int i=0; i<N; i++){
		cin >> A.at(i);
	}
	for(int i=0; i<Q; i++){
		long K = 0;
		cin >> K;
		for(auto A_i : A){
			if(A_i<=K){K++;}
			else{
				break;
			}
		}
		cout << K << endl;
	}
	return 0;
}
