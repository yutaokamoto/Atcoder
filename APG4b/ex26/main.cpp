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

// 問題文の形式でint値を出力
void print_int(int i){
	cout << i << endl;
}

// int型の変数同士の演算の結果を返す
int cal_int(int a, int b, string ope){
	if(ope=="+"){
		return a+b;
	}
	else if(ope=="-"){
		return a-b;
	}
}

// vec型の変数同士の演算の結果を返す
vector<int> cal_vec(vector<int> a, vector<int> b, string ope){
	vector<int> c(a.size());
	if(ope=="+"){
		for(int i=0; i<a.size(); i++){
			c.at(i) = a.at(i)+b.at(i);
		}
	}
	else if(ope=="-"){
		for(int i=0; i<a.size(); i++){
			c.at(i) = a.at(i)+b.at(i);
		}
	}
	return c;
}

int main(){
	// 命令の個数
	int N;
	cin >> N;
	// 命令
	vector<vector<string>> orders(N);
	map<string, int> dict_int;
	map<string, vector<int>> dict_vec;
	for(int i=0; i<N; i++){
		string word;
		bool flag_int = false;
		bool flag_vec = false;
		string ope = "";
		while(cin>>word){
			orders.at(i).push_back(word);
			if(word=="int"){flag_int=true;}
			if(word=="vec"){flag_vec=true;}
			if(word=="+" || word=="-"){ope=word;}
			if(word==";"){break;}
		}
	}


	return 0;
}
