#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int t = (int)N*1.08;
	if(t<206){cout << "Yay!" << endl;}
	else if(t==206){cout << "so-so" << endl;}
	else{cout << ":(" << endl;}
	return 0;
}
