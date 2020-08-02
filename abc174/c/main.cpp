#include <bits/stdc++.h>
using namespace std;

int main(){
    int K;
    int ans;
    int digit = 0;
    int quotient;
    int seven = 0;
    int remaind = 0;
    cin >> K;
    quotient = K;

    if((K%2==0 or K%5==0) and !(K%7==0)){
        cout << "-1" << endl;
    }
    else{
        while(quotient >= 1){ // >1にして間違えた．1がテストケースのとき誤った答え0を返してしまう．
            quotient = quotient/10;
            digit++;
        }
        //cout << digit << endl;
        for(int i = 0; i < digit; i++){
            seven = seven*10 + 7;
        }
        //cout << seven << endl;

        remaind = seven%K;
        //cout << remaind << endl;
        ans = digit;
        while(remaind%K != 0){
            remaind = (remaind * 10 + 7)%K;
            //cout << remaind << endl;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}