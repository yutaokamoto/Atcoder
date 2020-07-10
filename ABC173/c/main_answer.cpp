#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 3;
    cout << bitset<8>(a) << endl;
    cout << bitset<8>(a)[0] << endl;
    cout << endl;
    int count = 0;
    for(int i = 0; i < 8; i++){
        //cout << (i<<a) << endl; //0,8,16,24,32,...
        if(bitset<8>(a)[i]==1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}