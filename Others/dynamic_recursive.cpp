#include <bits/stdc++.h>
using namespace std;

struct Item{
    int weight;
    int value;
};

void dynamic(vector<vector<int>>& T, vector<Item>& item);
void dynamic_col(vector<vector<int>>& T, vector<Item>& item, int r, int c);
void dynamic_row(vector<vector<int>>& T, vector<Item>& item, int r, int c);

int R, C;

int main(){
    cin >> R >> C; // R : キャパシティー, C : 使うアイテムの個数

    //テーブルT，アイテムの集合item
    vector<vector<int>> T(R+1, vector<int>(C+1, 0));
    vector<Item> item(C+1);

    for(int i = 1; i <= C; i++){
        cin >> item[i].weight >> item[i].value;
    }
    cout << endl;

    /*for(int i = 0; i <= C; i++){
        cout << item[i].weight << " "
        << item[i].value << endl;
    }
    cout << endl;*/

    dynamic(T, item);

    for(int r = 0; r <= R; r++){
        for(int c = 0; c <= C; c++){
            cout << T[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}

void dynamic(vector<vector<int>>& T, vector<Item>& item){
    //dynamic_col()を呼び出して列を埋めていく．
    dynamic_col(T, item, 0, 0);
}

void dynamic_col(vector<vector<int>>& T, vector<Item>& item, int r, int c){
    if(c <= C){
        //cout << c << "列目" << endl;
        dynamic_row(T, item, r, c);
        return dynamic_col(T, item, r, c+1);
    }
}

void dynamic_row(vector<vector<int>>& T, vector<Item>& item, int r, int c){
    if(r <= R){
        //cout << "" << r << "行目" << endl;
        //cout << "   " << c << "列目" << endl;

        if((r >= item[c].weight) && (c > 0)){
            //cout << "T[r][c-1] = " << T[r][c-1] << "    "
            //<< "T[r-item[c].weight][c-1]+item[c].value = " << T[r-item[c].weight][c-1]+item[c].value << endl;

            T[r][c] = max(T[r][c-1], T[r-item[c].weight][c-1]+item[c].value);
        }
        return dynamic_row(T, item, r+1, c);
    }
}