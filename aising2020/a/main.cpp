#include <bits/stdc++.h>
using namespace std;

int L, R, d;

int main(){
    cin >> L >> R >> d;
    int cnt = 0;
    for(int i = L; i < R+1; i++){
        if(i%d==0){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}