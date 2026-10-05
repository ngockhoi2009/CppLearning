#include <bits/stdc++.h>
using namespace std;

void in(int S[], int k) {
	for (int i = 1; i <= k; i++) cout << S[i] << ' ';
	cout << '\n';
}

void sth32(int S[], int a[], int b[], int n, int m, int i, int A, int B) {
	if (i > n+m) in(S, n+m);
	else {
		if (A <= n) {
			S[i] = a[A];
			sth32(S, a, b, n, m, i+1, A+1, B);
		}  
		if (B <= m) {
			S[i] = b[B];
			sth32(S, a, b, n, m, i+1, A, B+1);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m; cin >> n >> m; int a[n+1], b[m+1]; int S[n+m+1];
	for (int i = 1; i <= n; i++) a[i] = i;
	for (int i = 1; i <= m; i++) b[i] = n+i;
	sth32(S, a, b, n, m, 1, 1, 1);
}
