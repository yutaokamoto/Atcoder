#include <bits/stdc++.h>
using namespace std;

int main(){
    char c[] = "120";
    //int i = atoi(c); //char型のときは，atoi()．
    string s = "120";
    int i = stoi(s); //string型のときは，stoi()．
    cout << "iは，" << i << endl;
    cout << "s[0]は，" << s[0] << endl;

    //string・char -> intのときに劇的に使える
    //https://marycore.jp/prog/c-lang/convert-or-cast-char-to-int/#%E6%95%B0%E5%AD%97%E3%81%8B%E3%82%89%E6%95%B0%E5%80%A4%E3%81%AB%E5%A4%89%E6%8F%9B%E3%81%99%E3%82%8B
    int j = s[2] - '0';
    cout << "jは，" << j << endl;

    vector<int> v{2};
    v.resize(5);
    for_each(v.begin(), v.end(), [](int i){cout << i << "   ";});
    cout << endl;

    //2進数表記
    cout << 0b011+0b111 << endl;
    int a = 0b011;
    int b = 0b111;
    cout << "b%a = " << b%a << endl;
    cout << "aの1桁目は，" << ((a>>1)&1) << endl;
    cout << bitset<4>(~(0b011>>3)) << endl;

    //シフト演算子
    ////左に1つシフト
    cout << (0b1<<1) << endl;
    ////右に1つシフト
    cout << (0b1>>1) << endl;

    cout << bitset<200000>(0) << endl;
    return 0;
}