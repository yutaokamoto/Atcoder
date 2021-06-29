#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<n; i++)

//string divide[4] = {"dream", "dreamer", "erase", "eraser"};


vector<string> cands = {"dream", "dreamer", "erase", "eraser"};

bool same_any(string w){
	for(string cand : cands){
		//cout << "\tcand : " << w << " " << cand << endl;
		if(w==cand){return true;}
	}
	return false;
}


int main(){
	/*
	string S;
    cin >> S;

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

    // 端から切っていく
    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4 個の文字列たちどれかで divide できるか
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) { // d で divide できるか
                can2 = true;
                i += d.size(); // divide できたら i を進める
            }
        }
        if (!can2) { // divide できなかったら
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
	*/
	
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	for(auto &cand : cands){reverse(cand.begin(), cand.end());}
	bool same = true;
	int s_size = (int)s.size();
	//int ind = 0;
	string w = "";
	string w_one = "";
	string w_two = "";
	for(int i=0; i<s_size;){
		w = s.substr(i, 5);
		w_one = s.substr(i, 6);
		w_two = s.substr(i, 7);
		bool f = same_any(w);
		bool f_one = same_any(w_one);
		bool f_two = same_any(w_two);
		if(f){i += 5;}
		else if(f_one){i += 6;}
		else if(f_two){i += 7;}
		else{same = false; break;}
	}
	if(same){cout << "YES" << endl;}
	else{cout << "NO" << endl;}
	
	return 0;
}
