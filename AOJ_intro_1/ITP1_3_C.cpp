#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j;
	while(cin >> i >>j){
		if(i==0 && j==0){break;}
		if(i<j){cout << i << " " << j << endl;}
		else{cout << j << " " << i << endl;}
	}
	return 0;
}
