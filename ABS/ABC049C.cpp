#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<n; i++)

vector<string> cands = {"dream", "dreamer", "erase", "eraser"};

bool same_any(string w){
	for(string cand : cands){
		//cout << "\tcand : " << w << " " << cand << endl;
		if(w==cand){return true;}
	}
	return false;
}

int main(){
	string s;
	cin >> s;
	//cout << t+"dream" << endl;
	string w = "";
	string w_one = "";
	string w_two = "";
	int ind = 0;
	bool same = true;
	int s_size = (int)s.size();
	for(int i=0; i<s_size; i+=ind){
		w = s.substr(ind, 4+1);
		cout << w << endl;
		w_one = s.substr(ind, 5+1);
		cout << w_one << endl;
		w_two = s.substr(ind, 6+1);
		cout << w_two << endl;

		bool f = same_any(w);
		bool f_one = same_any(w_one);
		bool f_two = same_any(w_two);

		if(f || f_one || f_two){
			//cout << "Same! : " << w << endl;
			if(f){ind += 4+1;}
			else if(f_one){ind += 5+1;}
			else{ind += 6+1;}
		}
		else{
			//cout << "Not same! : " << w_one << endl;
			same=false;
			break;
		}
	}

	if(same){cout << "YES" << endl;}
	else{cout << "NO" << endl;}
	return 0;
}
