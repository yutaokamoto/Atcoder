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

void print_int(int i){
	cout << i << endl;
}

int main(){
	// 命令の個数
	int N;
	cin >> N;
	// 命令
	vector<vector<string>> orders(N);
	for(int i=0; i<N; i++){
		string word;
		while(cin>>word){
			orders.at(i).push_back(word);
			if(word==";"){break;}
		}
	}
	return 0;
}
