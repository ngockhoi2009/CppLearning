#include <bits/stdc++.h>
using namespace std;
const int M = 1001;
const int MaxN = 1e5+1;

long long a[MaxN], prefix[MaxN];
void khoitao(int n) {	
	prefix[0] = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i]%3==0) prefix[i] = prefix[i-1] + 1;
		else prefix[i] = prefix[i-1];
	}
}

int main (){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	khoitao(n);
	int q;
	cin >> q;
	while (q--) {
		int L, R;
		cin >> L >> R;
		int count = 0;
		cout << prefix[R] - prefix[L-1] << '\n';
	}
	return 0;
}
