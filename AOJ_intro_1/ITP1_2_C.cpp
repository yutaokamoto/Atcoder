#include <bits/stdc++.h>
using namespace std;

void sort_and_print(int a, int b, int c){
	int temp;
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	if(b>c){
		temp = b;
		b = c;
		c = temp;
	}
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << ' ' << b << ' ' << c << endl;
}

int main(){
	/*vector<int> v(3);
	for(int i=0; i<3; i++){
		cin >> v.at(i);
	}
	sort(v.begin(), v.end());
	for(auto i : v){cout << i << " ";}
	cout << endl;*/
	int a, b, c;
	cin >> a >> b >> c;
	sort_and_print(a,b,c);
	return 0;
}
