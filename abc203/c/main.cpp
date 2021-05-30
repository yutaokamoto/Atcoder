#include <bits/stdc++.h>
using namespace std;

void sort2vectors(vector<long long> &av, vector<long long> &bv)
{
        long long n = av.size();
        vector<long long> p(n), av2(n), bv2(n);
        iota(p.begin(), p.end(), 0);
        sort(p.begin(), p.end(), [&](long long a, long long b) { return av[a] < av[b]; });
        for (long long i = 0; i < n; i++) {
                av2[i] = av[p[i]];
                bv2[i] = bv[p[i]];
        }
        av = av2;
        bv = bv2;
}

int main(){
	long long N, K;
	cin >> N >> K;
	vector<long long> A(N);
	vector<long long> B(N);
	for(long long i=0; i<N; i++){
		cin >> A.at(i) >> B.at(i);
	}
	sort2vectors(A, B);
	long long now = 0;
	long long  index = 0;
	
	/*for(int i=0; i<A.size(); i++){
		if(now!=A.at(i)){
			K -= A.at(i) - now;
			now = A.at(i);
		}
		cout << now << endl;
		K += B.at(i);
	}*/
	/*while(true){
		now++;
		K--;
		while((index<A.size())&&(now==A.at(index))){
			K += B.at(index);
			index++;
		}
		if(K==0){
			break;
		}
	}*/
	cout << now+K << endl;
	return 0;
}
