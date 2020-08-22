#include <bits/stdc++.h>
using namespace std;

string N;
int main(){
    cin >> N;
    int ans = 0;
    for(auto i : N){
        ans += (int)i - 48;
    }

    //cout << ans << endl;
    if(ans%9==0 || ans==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}