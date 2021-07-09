#include <bits/stdc++.h>
#include<atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
	int a, b;
	cin >> a >> b;
	bool f = true;
	if(b<a || (6*a)<b)f = false;
	/*for(int i0=0; i0<=a; i0++){
		for(int i1=0; i1<=a; i1++){
			for(int i2=0; i2<=a; i2++){
				for(int i3=0; i3<=a; i3++){
					for(int i4=0; i4<=a; i4++){
						int i5 = (b-(i0+2*i1+3*i2+4*i3+5*i4))/6;
						if(i5<0)continue;
						if((i0+2*i1+3*i2+4*i3+5*i4+6*i5==b) && (i0+i1+i2+i3+i4+i5==a))f = true; break;
					}
				}
			}
		}
	}*/
	/*for(int i0=0; i0<a; i0++){
		for(int i1=0; i1<(a-i0); i1++){
			for(int i2=0; i2<(a-i0-i1); i2++){
				for(int i3=0; i3<(a-i0-i1-i2); i3++){
					for(int i4=0; i4<(a-i0-i1-i2-i3); i4++){
						if((b-(i0+2*i1+3*i2+4*i3+5*i4))%6==0)f = true; break;
					}
				}
			}
		}
	}*/
	cout << (f ? "Yes" : "No") << "\n";
	return 0;
}
