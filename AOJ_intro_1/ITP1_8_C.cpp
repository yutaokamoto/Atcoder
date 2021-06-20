#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> s;
	string s_i;
	while(cin >> s_i){
		if(s_i.back()=='.'){break;}
		s.push_back(s_i);
	}
	map<char, int> m;
	/*for(auto i : s){
		if(i!=' ' || i!='.' || i!=','){m[i]++;}
	}*/
	for(int i=0; i<s.size(); i++){
		for(int j=0; j<s[i].size(); j++){
			char s_ij = s[i][j];
			if(s_ij<'a'){s_ij='a'+(s_ij-'A'); /*cout << 'a'+(s_ij-'A') << endl;*/}
			if(s_ij!=' ' || s_ij!='.' || s_ij!=','){m[s_ij]++;}
		}
	}
	for(char i='a'; i<='z'; i++){
		cout << i << " : " << m[i] << endl;
	}
	return 0;
}
