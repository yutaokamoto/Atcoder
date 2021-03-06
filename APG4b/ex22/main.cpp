#include <bits/stdc++.h>
using namespace std;

int main(){
    //自分の標準入力
    /*int N;
    vector<pair<int, int>> AB;
    //vector<pair<int, int>> AB{make_pair(5,2), make_pair(2,7), make_pair(4,1)};

    cin >> N;
    //N = 3;
    for(int i = 0; i < N; i++){
        int f, s;
        cin >> f;
        cin >> s;
        AB.push_back(make_pair(f, s));
        //cout << AB[i].first << " " << AB[i].second << endl;
    }*/

    //模範解答の標準入力
    int N;
    cin >> N;
    vector<pair<int, int>> AB(N);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        //AB.at(i) = make_pair(b, a);  // b, a の順でペアにする　→　普通にソートするだけで2つ目の値を基準に並べ替えることになる．
        AB[i] = make_pair(a,b);
    }

    sort(AB.begin(), AB.end(), [](pair<int, int>& p0, pair<int, int>& p1){return (p0.second == p1.second)?(p0.first < p1.first):(p0.second < p1.second);});

    for(int i = 0; i < N; i++){
        cout << AB[i].first << " " << AB[i].second << endl;
    }

    return 0;
}