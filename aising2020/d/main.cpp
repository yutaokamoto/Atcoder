#include <bits/stdc++.h>
using namespace std;

int N;
string X;
vector<int> popcount_array;
vector<int> f_array;
int popcount(unsigned int x);
int f(unsigned int x);
vector<unsigned int> make_Xi(int N,string X);

int main(){
    cin >> N >> X;
    popcount_array.resize(pow(2, N));
    f_array.resize(pow(2, N));
    vector<unsigned int> Xi = make_Xi(N, X);
    //for_each(Xi.begin(), Xi.end(), [](unsigned int xi){cout << xi << endl;});
    for(unsigned int xi : Xi){
        cout << f(xi) << endl;
    }
    return 0;
}

int popcount(unsigned int x){
    int popcount = popcount_array[x];
    while(x > 0 && popcount_array[x]==0){
        popcount += x%2;
        x = (unsigned int)x/2;
    }
    popcount_array[x] = popcount;
    return popcount_array[x];
}

int f(unsigned int x){
    int cnt = f_array[x];
    int pop_count;
    while(x > 0 && f_array[x]==0){
        pop_count = popcount(x);
        x = x%pop_count;
        cnt++;
    }
    f_array[x] = cnt;
    return f_array[x];
}

vector<unsigned int> make_Xi(int N,string X){
    queue<int> remainders;
    for(int b = 0; b < N; b++){
        remainders.push(X[b]);
    }
    //cout << "remaindersのサイズは，" << remainders.size() << endl;
    
    vector<unsigned int> Xi(N, 0);
    int remainder;
    for(int i = 0; i < N; i++){
        //cout << i << "回目の繰り返し" << endl;
        for(int j = 0; j < N; j++){
            //cout << "   " << j << "回目の繰り返し" << "     ";
            remainder = remainders.front() - '0';
            //cout << remainder << endl;
            remainders.pop();
            if(j == i){
                //cout << "   " << j+1 << "桁目の" << remainder << "を" << (1-remainder) << "に変える" << endl;
                Xi[i] = Xi[i]*2 + (1-remainder);
            }
            else{
                Xi[i] = Xi[i]*2 + remainder;
            }
            remainders.push(remainder + '0');
        }
    }
    return Xi;
}