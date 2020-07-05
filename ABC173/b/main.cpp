#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> S(N);
    int AC = 0;
    int WA = 0;
    int TLE = 0;
    int RE = 0;
    for(int i = 0; i < N; i++){
        cin >> S[i];
        if(S[i] == "AC"){
            AC++;
        }
        else if(S[i] == "WA"){
            WA++;
        }
        else if(S[i] == "TLE"){
            TLE++;
        }
        else{
            RE++;
        }
    }
    cout << "AC x " << AC << endl
    << "WA x " << WA << endl
    << "TLE x " << TLE << endl
    << "RE x " << RE << endl;
    return 0;
}