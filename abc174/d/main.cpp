#include <bits/stdc++.h>
using namespace std;

int N;
string c;
int R = 0, W = 0;
int right_R = 0;
int temp = 0;
int ans = -1;

int main(){
    cin >> N;
    cin >> c;
    for(int i = 0; i < N; i++){
        if(c[i] == 'W'){
            W++;
        }
        else{
            R++;
        }
    }
    if(R == N){
        cout << 0 << endl;
    }
    else{
        //cout << R << " " << W << endl;
        
        for(int w = 0; w <= N; w++){
            temp = (W - w)*(W-w>0) + W*(W-w<=0); //白を赤にする個数．
            if(temp + R != N){
                right_R = 0;
                for(int r = N-temp-1; r <= N; r++){
                    if(c[r] == 'R'){
                        right_R++;
                    }
                }
                temp += right_R; //交換の数．
            }
            //cout << "w = " << w << " right_R = " << right_R << " temp = " << temp << endl;
            if(temp < ans or ans == -1){
                ans = temp;
            }
        }

        cout << ans << endl;
    }
    return 0;
}