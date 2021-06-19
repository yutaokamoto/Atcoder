#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	//vector<int> A(N);
	int A;
	int ans = 1000000000;
	for(int i=0; i<N; i++){
		//cin >> A.at(i);
		cin >> A;
		int cnt = 0;
		if(A%2==1){ans=0; break;}
		while(A%2==0){
			cnt++;
			A /= 2;
		}
		if(cnt<ans)ans = cnt;
	}
	cout << ans << endl;

	return 0;
}
