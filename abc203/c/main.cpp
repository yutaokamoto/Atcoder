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
	/*vector<long long> A(N);
	vector<long long> B(N);
	for(long long i=0; i<N; i++){
		cin >> A.at(i) >> B.at(i);
	}
	sort2vectors(A, B);
	for(int i=0; i<A.size(); i++){
		if(A.at(i)<=K){
			K += B.at(i);
		}
	}
	cout << K << endl;*/

	map<long long, int> Friend;
	long long A;
	int B;
	for(long long i=0; i<N; i++){
		cin >> A >> B;
		if(Friend.count(A)==0){Friend[A]=B;}
		else{Friend.at(A)+=B;}
	}
	for(auto i=Friend.begin(); i!=Friend.end(); i++){
		//cout << i->first << endl;
		if(i->first<=K){
			K += i->second;
		}
	}
	cout << K << endl;
	return 0;
}
