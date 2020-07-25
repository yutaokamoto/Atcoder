#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;

int main(){
    cin >> N;
    A.resize(N);
    map<int, int> count;
    pair<int, int> ans = make_pair(0, 0);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
        count[A.at(i)]++;
        /*if(count.count(i)){
            count[i]++;
        }
        else{
            count[i] = 1;
        }*/
    }

    for(auto p: count){
        //cout << p.first << " " << p.second << endl;
        if(ans.second < p.second){
            ans = p;
        }
    }
    cout << ans.first << " " << ans.second << endl;
    return 0;
}