#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> A(N,0);
	for(int i=0; i<N; i++){
		cin >> A.at(i);
	}
	sort(A.begin(), A.end());
	bool f = true;
	int i = 1;
	for(auto j : A){
		if(j!=i){
			f = false;
			break;
		}
		i++;
	}
	if(f){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}
