#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	string p;
	int n;
	// vectorの容量を13しか確保しないとインデックスは0~12になってしまうので注意
	vector<int> S(14, 0);
	vector<int> H(14, 0);
	vector<int> C(14, 0);
	vector<int> D(14, 0);
	for(int i=0; i<N; i++){
		cin >> p >> n;
		if(p=="S"){S.at(n) = n;}
		else if(p=="H"){H.at(n) = n;}
		else if(p=="C"){C.at(n) = n;}
		else{D.at(n) = n;}
	}
	for(int i=1; i<=13; i++){
		if(S.at(i)==0){cout << "S " << i << endl;}
	}
	for(int i=1; i<=13; i++){
		if(H.at(i)==0){cout << "H " << i << endl;}
	}
	for(int i=1; i<=13; i++){
		if(C.at(i)==0){cout << "C " << i << endl;}
	}
	for(int i=1; i<=13; i++){
		if(D.at(i)==0){cout << "D " << i << endl;}
	}
	return 0;
}
