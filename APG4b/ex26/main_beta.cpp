#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でint値を出力
void print_int(int a, int b, string ope){
	if(ope=="+"){
		cout << a+b << endl;
	}
	else{
		cout << a-b << endl;
	}
}

// int型の変数同士の演算の結果を返す
int cal_int(int a, int b, string ope){
	if(ope=="+"){
		return a+b;
	}
	else{// if(ope=="-"){
		return a-b;
	}
}

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

// vec型の変数同士の演算の結果を返す
vector<int> cal_vec(vector<int> a, vector<int> b, string ope){
	vector<int> c(a.size());
	if(b.size()==0){return a;}
	for(int i=0; i<a.size(); i++){
		if(ope=="+"){
			c.at(i) = a.at(i) + b.at(i);
		}
		else{
			c.at(i) = a.at(i) - b.at(i);
		}
	}
	return c;
}

int main(){
	string word;
	bool flag_int = false;
	bool flag_vec = false;
	bool flag_eq = false;
	bool flag_ope = false;
	bool flag_par = false;
	bool flag_print_int = false;
	bool flag_print_vec = false;
	string ope = "";
	string var_name;

	map<string, int> dict_int;
	int a = 0;
	int b = 0;

	map<string, vector<int>> dict_vec;
	vector<int> vec_a;
	vector<int> vec_b;

	int N;
	cin >> N;
	for(int iteration = 0; iteration<N; iteration++){
		while(cin >> word){
			//int型の変数の場合
			if(word=="int"){flag_int=true; continue;}
			//// =の左側の項についての操作
			if(flag_int && !flag_eq && ("a"<=word && word<="z")){dict_int[word]=0; var_name=word;}
			if(word=="="){flag_eq=true; continue;}
			//// =の右側の項 or print_intの右側の操作
			if((flag_eq || flag_print_int) && !flag_vec){
				if("0"<=word && word<="9"){
					if(a==0 && b==0){a=stoi(word);}
					else if(a!=0 && b==0){b=stoi(word);}
				}
				else if("a"<=word && word<="z"){
					if(a==0 && b==0){a=dict_int.at(word);}
					else if(a!=0 && b==0){b=dict_int.at(word);}
				}
			}
			//// 足し算、引き算の準備
			if((flag_int || flag_print_int) && (word=="+" || word=="-")){ope=word; flag_ope=true; continue;}
			//// 足し算、引き算を行う
			if(flag_ope && (flag_int || flag_print_int)){
				//cout << a << " " << b << endl;
				a=cal_int(a,b,ope);
				b = 0;
				flag_ope = false;
			}
			//// 値の表示の準備
			if(word=="print_int"){flag_print_int = true; continue;}
			//// 行の終わり
			if(word==";" && (flag_int || flag_print_int)){
				// 変数に値を代入する
				if(flag_eq){dict_int.at(var_name) = a; a=0;}
				flag_eq = false;
				flag_int = false;
				// 値の表示
				if(flag_print_int){
					print_int(a, b, ope);
					flag_print_int = false;
				}
				break;
			}

			//vec型の場合
			if(word==","){continue;}
			if(word=="vec"){flag_vec=true; continue;}
			//// =の左側の項についての操作
			if(flag_vec && !flag_eq && ("a"<=word && word<="z")){dict_vec[word]={0}; dict_vec[word].clear(); var_name=word;}
			if(word=="="){flag_eq=true; continue;}
			//// =の右側の項 or print_intの右側の操作
			if(word=="["){flag_par=true; continue;}
			if(word=="]"){flag_par=false; continue;}
			if((flag_eq || flag_print_vec) && !flag_int){
				if("0"<=word && word<="9"){
					//if(flag_ope){cout << word << " " << flag_ope << endl;}
					if(!flag_ope){vec_a.push_back(stoi(word));}
					else{vec_b.push_back(stoi(word));}
					continue;
				}
				else if("a"<=word && word<="z"){
					if(flag_par){
						if(!flag_ope){vec_a.clear(); vec_a.push_back(dict_int.at(word));}
						else{vec_a.clear(); vec_b.push_back(dict_int.at(word));}
					}
					else{
						if(!flag_ope){vec_a = dict_vec.at(word);}
						else{vec_b = dict_vec.at(word);}
						//if(vec_a.size()==0 && vec_b.size()==0){vec_a = dict_vec.at(word);}
						//else if(vec_a.size()!=0 && vec_b.size()==0){vec_b = dict_vec.at(word);}
					}
				}
			}
			//// 足し算、引き算の準備
			//if((flag_vec || flag_print_vec) && (word=="+" || word=="-")){ope=word; flag_ope=true; continue;}
			if(word=="+" || word=="-"){ope=word; flag_ope=true; continue;}
			//// 足し算、引き算を行う
			if(flag_ope && (flag_vec || flag_print_vec)){
				//cout << word << endl;
				vec_a=cal_vec(vec_a,vec_b,ope);
				vec_b.clear();
				flag_ope = false;
			}
			//// 値の表示の準備
			if(word=="print_vec"){flag_print_vec = true; continue;}
			//// 行の終わり
			if(word==";" && (flag_vec || flag_print_vec)){
				// 変数に値を代入する
				if(flag_eq){dict_vec.at(var_name) = vec_a; vec_a.clear();}
				flag_eq = false;
				flag_vec = false;
				// 値の表示
				if(flag_print_vec){
					print_vec(vec_a);
					flag_print_vec = false;
				}
				break;
			}
		}
	}
	//for(auto i : dict_int){cout << i.first << " " << i.second << endl;}
	/*for(auto i : dict_vec){
		cout << i.first << " ";
		for(auto j : i.second){cout << j << " ";}
		cout << endl;
	}*/
	return 0;
}
