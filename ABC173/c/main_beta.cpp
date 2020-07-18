#include <bits/stdc++.h>
using namespace std;

int enumerate(vector<string>* c, const vector<int>& row_b, const vector<int>& col_b, int K);
vector<vector<int>> choice(int n);

int main(){
    //H:マスの高さ, W:マスの幅, K:残したい黒の数
    int H, W, K;
    cin >> H >> W >> K;

    //c:入力される行列, row_b:各行の黒の数, col_b:各列の黒の数
    vector<string> c(H, "");
    vector<int> row_b(H, 0);
    vector<int> col_b(H, 0);
    for(int row = 0; row < H; row++){
        cin >> c[row];
        for(int col = 0; col < W; col++){
            if(c[row][col] == '#'){
                row_b[row]++;
                col_b[col]++;
            }
        }
    }
    
    cout << enumerate(&c, row_b, col_b, K) << endl;


    return 0;
}

int enumerate(vector<string>* c, const vector<int>& row_b, const vector<int>& col_b, int K){
    if(accumulate(row_b.begin(), row_b.end(), 0)+accumulate(col_b.begin(), col_b.end(), 0) == K){
        return 1;
    }
    else if(accumulate(row_b.begin(), row_b.end(), 0)+accumulate(col_b.begin(), col_b.end(), 0) <= K){
        return 0;
    }
    else{
        int ptrn = 0;
        return ptrn;
    }
}

vector<vector<int>> choice(int n){
    vector<vector<int>> P;
    return P;
}