#include <bits/stdc++.h>
using namespace std;

unsigned int N;

vector<int> f(int n);

int main(){
    cin >> N;

    vector<int> ans = f(N);

    //for_each(ans.begin(), ans.end(), [](int x){cout << x << endl;});
    for(int i = 1; i<N+1; i++){
        cout << ans[i] << endl;
    }
    return 0;
}

vector<int> f(int n){
    int i = (int)(sqrt(n));
    vector<int> cnt(n+1);
    int val = 0;
    for(int x = 1; x < i+1; x++){
        for(int y = 1; y < i+1; y++){
            for(int z = 1; z < i+1; z++){
                val = pow(x+y+z, 2)-(x*y+y*z+z*x);
                if(val<n+1){
                    cnt[val]++;
                }
            }
        }
    }

    return cnt;
}