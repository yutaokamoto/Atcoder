#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<double> A;

int main(){
    cin >> N >> K;
    A.resize(N+1);
    unsigned int input;
    for(int i = 1; i <= N; i++){
        cin >> input;
        A.at(i) = (double)input/pow(10, 5);
        //cout << A[i] << endl;
    }

    for(int i = K+1; i <= N; i++){
        if(A[i]/A[i-K] > 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    /*double K_i = 1;
    double K_i_1 = 1;
    for(int i = 1; i <= N; i++){
        if(i <= K){
            K_i *= A[i];
            //cout << K_i << endl;
        }
        else{
            cout << i << "学期目" << endl;
            K_i_1 = (K_i/A[i-K])*A[i];
            if(K_i_1 > K_i){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            K_i = K_i_1;
        }
    }*/
    return 0;
}