#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N;
    cin >> K;
    int ans = 0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=K; j++){
            ans += i*100+j;
        }
    }
    cout << ans << endl;
	return 0;
}
