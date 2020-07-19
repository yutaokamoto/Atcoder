#include <bits/stdc++.h>
using namespace std;

int main(){
    char c[] = "120";
    //int i = atoi(c); //char型のときは，atoi()．
    string s = "120";
    int i = stoi(s); //string型のときは，stoi()．
    cout << i << endl;

    //string・char -> intのときに劇的に使える
    //https://marycore.jp/prog/c-lang/convert-or-cast-char-to-int/#%E6%95%B0%E5%AD%97%E3%81%8B%E3%82%89%E6%95%B0%E5%80%A4%E3%81%AB%E5%A4%89%E6%8F%9B%E3%81%99%E3%82%8B
    cout << s[0] << endl;
    int j = s[2] - '0';
    cout << j << endl;
    return 0;
}