#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;

int main(){
	int h, w;
	bool f = true;
	while(cin >> h >> w){
		if(h==0 && w==0){break;}
		for(int i=0; i<h; i++){
			if(i%2==0){f=true;}
			else{f=false;}
			for(int j=0; j<w; j++){
				if(f){cout << "#"; f=false;}
				else{cout << "."; f=true;}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
