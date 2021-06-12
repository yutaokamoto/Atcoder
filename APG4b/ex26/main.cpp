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
	for(int i=0; i<N; i++){
		vector<vector<string>> orders(N);
		map<string, int> dict_int;
		map<string, vector<int>> dict_vec;
		string word; // 命令の1単語を表す
		bool flag_int = false; // その行がint型の変数に関する命令であることを表す
		bool flag_vec = false; // その行がvec型の変数に関する命令であることを表す
		bool flag_eq = false; // その行の命令に「=」が含まれることを表す
		int a,b; // 命令の中で出てくる整数を入れておく変数
		/*vector<int> a_vec,b_vec; // 命令の中で出てくるベクトルを入れておく変数*/
		vector<int> vec; // 命令の中で出てくるベクトルを一時的に入れておく変数
		queue<vector<int>> vec_q; // 命令の中で出てくるベクトルを入れておく変数
		bool flag_ope = false; // 演算子命令が行われることを表す
		string ope = ""; // 命令の中で出てくる演算子を入れておく変数
		bool flag_par = false;
		while(cin>>word){
			orders.at(i).push_back(word);
			if(word=="int"){flag_int=true;}
			if(flag_int){dict_int.at(word)=0; flag_int=false;}
			if(word=="vec"){flag_vec=true;}
			if(flag_vec){dict_vec.at(word)={0,}; flag_vec=false;}
			if(word=="="){flag_eq=true;}
			// int型の変数の処理
			if(flag_eq){
				if("0"<=word && word<="9"){a=stoi(word);b=stoi(word);}
				else{a=dict_int.at(word);b=dict_int.at(word);}
				flag_eq=false;
			}
			if(flag_int && (word=="+" || word=="-")){ope=word; flag_ope=true;}
			if(flag_ope){a=cal_int(a,b,ope); b=stoi(word);}
			// vec型の変数の処理
			if(word=="["){flag_par=true;}
			if(flag_par){
				if("0"<=word && word<="9"){vec.push_back(stoi(word));}
				else{vec.push_back(dict_int.at(word));}
				/*if(a_vec.size()==0){
					if("0"<=word && word<="9"){a_vec.push_back(stoi(word));}
					else{a_vec.push_back(dict_int.at(word));}
				}
				else{
					if("0"<=word && word<="9"){b_vec.push_back(stoi(word));}
					else{b_vec.push_back(dict_int.at(word));}
				}*/
			}
			if(word=="]"){flag_par=false; vec_q.push(vec); vec={};}
			if(flag_vec && (word=="+" || word=="-")){ope=word; flag_ope=true;}
			if((!flag_par) && ("A" <= word && word <= "z")){}
			if(word==";"){break;}
		}
	}


	return 0;
}
