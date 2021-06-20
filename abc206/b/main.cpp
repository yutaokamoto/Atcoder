#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int s = 0;
	int i = 0;
	while(s<N){
		i++;
		s += i;
	}
	cout << i << endl;
	return 0;
}
