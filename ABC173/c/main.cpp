#include <bits/stdc++.h>
using namespace std;

int H, W, K;
vector<string> cell;

int main(){
    cin >> H >> W >> K;
    cell.resize(H);
    //cout << cell.size() << endl;
    for(int i = 0; i < H; i++){
        cin >> cell[i];
    }
    //for_each(cell.begin(), cell.end(), [](string x){cout << x << endl;});

    int ans = 0;
    for(int r = 0; r < pow(2, H); r++){
        for(int c = 0; c < pow(2, W); c++){
            int cnt = 0;
            for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                    if( (((r>>i)&1)==0) && (((c>>j)&1)==0) && cell[i][j]=='#' ){
                        cnt++;
                    }
                }
            }
            if(cnt == K){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}