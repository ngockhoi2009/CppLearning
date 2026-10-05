#include <bits/stdc++.h>
using namespace std;
const int M = 1e6 + 700;

bool isPrime[M+1];
void sansnt() {
	for (int i = 2; i <= M; i++) isPrime[i] = true;
	for (int i = 2; i*i <= M; i++) {
		if (isPrime[i]) {
			for (int j = 2*i; j <= M; j+=i) isPrime[j] = false;
		}
	}
}


int main (){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	sansnt();
	while (cin >> n) {
		int i = n + 1;
		while (i > n) {
			if (isPrime[i]) {
			cout << i << endl;
			break;
			}
		i++;
		}
	}
	return 0;
}
