#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, A, B;
	cin >> N >> A >> B;
	int summation = 0;
	int ans = 0;
	for(int i=1; i<=N; i++){
		// ループ内で定義した変数のスコープはそのループ内
		summation = 0;
		// iの値を更新してループを回そうとすると無限ループになる
		int j = i;
		while(j>0){
			summation += j%10;
			j /= 10;
		}
		//cout << i << " " << summation << endl;
		if(A<=summation && summation<=B){ans+=i;}
	}
	cout << ans << endl;
	return 0;
}
