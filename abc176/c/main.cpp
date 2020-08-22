#include <bits/stdc++.h>
using namespace std;

int N;
vector<long int> A;

int main(){
    cin >> N;
    A.resize(N);
    int A_i = 0;
    for(int i = 0; i < N; i++){
        cin >> A_i;
        A[i] = A_i;
    }

    int A_i_1 = 0;
    long long int ans = 0;
    for(int i = 0; i < N; i++){
        if(A[i-1] > A[i] && i > 0){
            ans += A[i-1] - A[i];
            A[i] += A[i-1] - A[i];
        }
        //cout << A_i << endl;
    }

    /*for(int i = 0; i < N; i++){
        cout << A[i] << endl;
    }*/

    cout << ans << endl;
    return 0;
}