#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int c = 0;
	for(auto i : s){if(i=='1'){c++;}}
	//for(int i=0; i<3; i++){if(s[i]=='1'){c++;}}
	cout << c << endl;
	return 0;
}
