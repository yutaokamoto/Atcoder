#include <bits/stdc++.h>
using namespace std;

int N, D;
int X, Y;
long double l;
int c = 0;

int main(){
    cin >> N >> D;
    for(int i = 0; i < N; i++){
        cin >> X >> Y;
        l = pow(pow(X, 2)+pow(Y, 2), 0.5); // pow(X, 1/2)などは×!!
        //cout << l << endl;
        if(l <= D){
            c++;
        }
    }

    cout << c << endl;
    return 0;
}