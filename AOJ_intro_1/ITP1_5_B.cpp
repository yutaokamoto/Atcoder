#include <bits/stdc++.h>
using namespace std;

int main(){
	int H, W;
	while(cin >> H >> W){
		if(H==0 && W==0){break;}
		for(int i=0; i<H; i++){
			if(i==0 || i==H-1){
				for(int j=0; j<W; j++){
					cout << '#';
				}
			}
			else{
				cout << '#';
				for(int j=0; j<W-2; j++){
					cout << '.';
				}
				cout << '#';
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
