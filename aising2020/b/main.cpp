#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> a;

int main(){
    cin >> N;
    a.resize(N);

    int cnt = 0;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        if((i+1)%2!=0 && a[i]%2!=0){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}