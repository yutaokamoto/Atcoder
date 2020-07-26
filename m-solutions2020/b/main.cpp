#include <bits/stdc++.h>
using namespace std;

int A, B, C, K;

int main(){
    cin >> A >> B >> C;
    cin >> K;

    bool flag = 0;
    for(int i = 0; i <= K; i++){
        if(C*pow(2, K-i) > B*pow(2, i) && B*pow(2, i) > A && C*pow(2, K-i) > A){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}