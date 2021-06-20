#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	cout << N/2 << endl;
	vector<int> A(N);
	vector<int> f;
	vector<int> l;
	int A_i;
	for(int i=0; i<N; i++){
		cin >> A_i;
		A.at(i) = A_i;
		if(N%2==0){
			if(i<N/2){f.push_back(A_i);}
			else{l.push_back(A_i);}
		}
		else{
			if(i<N/2+1){f.push_back(A_i);}
			if(N/2-1<i){l.push_back(A_i);}
		}
	}
	//for(auto i : f){cout << i << " ";}
	//cout << endl;
	//for(auto i : l){cout << i << " ";}
	reverse(l.begin(), l.end());
	vector<bool> comp(f.size());
	for(int i=0; i<f.size(); i++){
		if(f.at(i)==l.at(i)){comp.at(i)=true;}
		else{comp.at(i)=false;}
		cout << comp.at(i) << " ";
	}
	return 0;
}
