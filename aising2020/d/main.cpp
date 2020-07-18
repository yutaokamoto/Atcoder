#include <bits/stdc++.h>
using namespace std;

int N;
unsigned int X;
int popcount(unsigned int x);
int f(int x);
vector<int> make_Xi(int N,unsigned int X);

int main(){
    cin >> N >> X;
    return 0;
}

int popcount(unsigned int x){
    int popcount = 0;
    while(x>0){
        popcount += x%10;
        x = (unsigned int)x/10;
    }
    return popcount;
}

int f(unsigned int x){
    int cnt = 0;
    int pop_count = popcount(x);
    while(x!=0){
        x = x%pop_count;
        cnt++;
    }
    return cnt;
}

vector<int> make_Xi(int N,unsigned int X){
    queue<int> amari;
    while(X>0){
        amari.push(X%10);
        X = (unsigned int)X/10;
    }
    vector<int> X_i(X);
    for(int j = 0; j < N; j++){
        X_i[j] 
    }
    return X_i
}