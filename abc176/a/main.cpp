#include <bits/stdc++.h>
using namespace std;

int N, X, T;
int main(){
    int t = 0;
    cin >> N >> X >> T;
    while(N > X*t){
        t += 1;
    }

    cout << T*t << endl;
    return 0;
}