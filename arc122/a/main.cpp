#include <bits/stdc++.h>
using namespace std;

const static int n = 10;//100000;

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i=0; i<N; i++){
		cin >> A.at(i);
	}
	long long sum = 0;
	for(int i=0; i<(1<<(N-1)); i++){
		bitset<n> temp(i);
		bool f_bit = false;
		long long sub_sum = A.at(0);
		//cout << temp << endl;
		for(int j=0; j<N-1; j++){
			//cout << temp[j];
			//if(!temp.test(j)){
			if(i&(1<<j)){
				if(f_bit){
					sub_sum = 0;
					break;
				}
				f_bit = true;
				sub_sum -= A.at(j+1);
			}
			else{
				f_bit = false;
				sub_sum += A.at(j+1);
			}
		}
		//cout << endl;
		//cout << "sub_sum = " << sub_sum << endl;
		sum += sub_sum;
	}

	cout << sum%1000000007 << endl;
	return 0;
}
