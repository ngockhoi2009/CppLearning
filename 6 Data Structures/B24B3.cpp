#include<bits/stdc++.h>
using namespace std;


long long ketqua(long long S[], int a[], int n) {
	long long sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) sum1 = sum1 + S[i];
		if (a[i] == 2) sum2 = sum2 + S[i];
		if (a[i] == 3) sum3 = sum3 + S[i];
	}
	long long ans = max(max(sum1, sum2), sum3) - min(min(sum1, sum2), sum3);
	return ans;
}

long long res = 1e15;
void chiaba(long long S[], int a[], int n, int i) {
	if (i > n) {
		if (ketqua(S, a, n) < res) res = ketqua(S, a, n);
	}
	else {
		for (int t = 1; t <= 3; t++) {
			a[i] = t;
			chiaba(S, a, n, i+1);
		}
	}
}


int main() {
	int n; cin >> n; long long S[n+1]; int a[n+1];
	for (int i = 1; i <= n; i++) cin >> S[i];
	chiaba(S, a, n, 1);
	cout << res;
}
