#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

int main(){
	int N;
	cin >> N;
	vector<string> orders;
	for(int i=0; i<N; i++){cin >> orders.at(i);}
	map<char, int> integers(5, 0);
	int i_0 = 0;
	vector<vector<int>> vecs(5);
	int i_1 = 0;
	for(string order : orders){
		for(char c : order){
			integers[i_0] += (int)c;
		}
	}
	return 0;
}
