#include <bits/stdc++.h>
using namespace std;

int H, W;
int C_h, D_h;
int C_w, D_w;
vector<vector<string>> S;

int main(){
    cin >> H >> W;
    cin >> C_h >> D_h;
    cin >> C_w >> D_w;
    S.resize(H);
    vector<int> s_h{H};
    for(int h = 0; h < h; h++){
        S[h].resize(H);
        for(int w = 0; w < W; w++){
            cin >> S[h][w];
        }
    }

    /*if(){
        cout << "-1" << endl;
    }*/

    while(movable()){
        for(int x = -2; x <= 2; x++){
            for(int y = -2; y <= 2; y++){
                if(x == 0 && y == 0){
                    continue;
                }

            }
        }
    }
    return 0;
}