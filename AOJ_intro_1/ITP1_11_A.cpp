#include <bits/stdc++.h>
using namespace std;

struct Dice{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
};

int main(){
	Dice dice;
	cin >> dice.a >> dice.b >> dice.c >> dice.d >> dice.e >> dice.f;
	string order;
	cin >> order;
	int now = dice.a;
	int n = dice.e;
	int s = dice.b;
	int w = dice.d;
	int e = dice.c;
	int r = dice.f;
	int temp;
	for(int i=0; i<order.size(); i++){
		if(order[i]=='N'){
			temp = s;
			s = r;
			r = n;
			n = now;
			now = temp;
		}
		else if(order[i]=='S'){
			temp = n;
			n = r;
			r = s;
			s = now;
			now = temp;
		}
		else if(order[i]=='W'){
			temp = e;
			e = r;
			r = w;
			w = now;
			now = temp;
		}
		else if(order[i]=='E'){
			temp = w;
			w = r;
			r = e;
			e = now;
			now = temp;
		}
	}
	/*for(auto i : order){
		if(i=='N'){
			temp = s;
			s = r;
			r = n;
			n = now;
			now = temp;
		}
		else if(i=='S'){
			temp = n;
			n = r;
			r = s;
			s = now;
			now = temp;
		}
		else if(i=='W'){
			temp = e;
			e = r;
			r = w;
			w = now;
			now = temp;
		}
		else if(i=='E'){
			temp = w;
			w = r;
			r = e;
			e = now;
			now = temp;
		}
		//cout << now << endl;
	}*/
	cout << now << endl;
	return 0;
}
