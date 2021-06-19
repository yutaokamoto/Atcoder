#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >>c;
	int cnt = 0;
	for(int i=a; i<=b; i++){
		if(c%i==0){
			cnt++;
		}
	}
	cout << cnt << endl;

	/*int max_num = max({a, b, c});
	cout << max_num << endl;
	int iter_max = pow(max_num, 0.5);
	int cnt = 0;
	for(int i=1; i<=max_num; i++){
		if(a%i==0 && b%i==0 && c%i==0){cnt++;}
	}
	cout << cnt << endl;*/
	return 0;
}
