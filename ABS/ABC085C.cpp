#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long y;
	cin >> n >> y;
	int a = -1;
	int b = -1;
	int c = -1;
	for(int i=0; i<n; i++){
		for(int j=0; j<(n-i); j++){
			// 1000円札の枚数までfor文を回すとちょうどn枚とならないものまでカウントしてしまう
			int k = n-i-j;
			if(0<=k && 10000*i+5000*j+1000*k==y){
				a = i;
				b = j;
				c = k;
				break;
			}
		}
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}
