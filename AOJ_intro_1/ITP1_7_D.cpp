#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int>> a; //(n, vector<int>(m));
	vector<vector<int>> b; //(m, vector<int>(l));
	vector<int> a_row(m);
	vector<int> b_row(l);
	for(int i=0; i<n; i++){
		a.push_back(a_row);
		for(int j=0; j<m; j++){
			cin >> a.at(i).at(j);
		}
	}
	for(int i=0; i<m; i++){
		b.push_back(b_row);
		for(int j=0; j<l; j++){
			cin >> b.at(i).at(j);
		}
	}
	int c = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			c = 0;
			for(int k=0; k<m; k++){
				c += a.at(i).at(k)*b.at(k).at(j);
			}
			cout << c;
			if(j!=l-1){cout << " ";}
		}
		cout << endl;
	}
	return 0;
}
