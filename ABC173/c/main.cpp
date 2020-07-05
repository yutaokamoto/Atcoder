#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> choice(int n);

int main(){
    int H, W, K;
    cin >> H >> W >> K;

    vector<string> c(H, "");
    vector<int> row_b_c(H, 0);
    vector<int> col_b_c(H, 0);
    for(int row = 0; row < H; row++){
        cin >> c[row];
        //cout << c[r][0];
        for(int col = 0; col < W; col++){
            if(c[row][col] == '#'){
                row_b_c[row]++;
                col_b_c[col]++;
            }
        }
    }

    int ptn = 0;
    vector<vector<int>> row_ptn;
    int col_ptn;
    if(accumulate(row_b_c.begin(), row_b_c.end(), 0)+accumulate(col_b_c.begin(), col_b_c.end(), 0) == K){
        cout << ptn+1 << endl;
    }
    else if(accumulate(row_b_c.begin(), row_b_c.end(), 0)+accumulate(col_b_c.begin(), col_b_c.end(), 0) <= K){
        cout << ptn << endl;
    }
    else{
        for(int n = 0; n < H; n++){
            row_ptn = choice(n);
            for(int m = 0; m < W; m++){
                
            }
        }
    }
    
    //cout << ptn << endl;


    return 0;
}

vector<vector<int>> choice(int n){
    vector<vector<int>> P;
    return P;
}