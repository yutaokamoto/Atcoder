#include <bits/stdc++.h>
//#include<atcoder/all>
//using namespace atcoder;
using namespace std;

int main(){
	int n;
	cin >> n;
	//vector<vector<vector<int>>> building(4+1, vector<vector<int>>(3+1, vector<int>(10+1, 0)));
	vector<vector<vector<int>>> building;
	vector<vector<int>> tou;
	vector<int> kai;
	kai.assign(10+1, 0);
	tou.assign(3+1, kai);
	building.assign(4+1, tou);
	int b, f, r, v;
	for(int i=0; i<n; i++){
		cin >> b >> f >> r >> v;
		//building[b][f][r] += v;

	}
	for(int i=1; i<4+1; i++){
		for(int j=1; j<3+1; j++){
			for(int k=1; k<10+1; k++){
				cout << building[i][j][k];
				if(k!=10){cout << " ";}
			}
			cout << endl;
		}
		cout << "####################" << endl;
	}
	return 0;
}
