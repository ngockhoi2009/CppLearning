#include <bits/stdc++.h>
using namespace std;

long long n, Sum; bool found = false;
void in(long long S[], int a[], long long k) {
	long long ans = 0;
	for (int i = 1; i <= k; i++) ans = ans + S[a[i]];
	if (ans == Sum) {
		cout << "YES";
		found = true;
	}
}

void tohop(long long S[], int a[], long long k, long long i) {
	if (i > k) in (S, a, k);
	else {
		for (int t = a[i-1]+1; t <= n-k+i; t++) {
			a[i] = t;
			tohop(S, a, k, i+1);
			if (found) return;
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> Sum; int a[n+1]; a[0] = 0; long long S[n+1];
	for (int i = 1; i <= n; i++) cin >> S[i];
	for (int k = 1; k <= n; k++) {
		tohop(S, a, k, 1);
		if (found) break;
	}
	if (!found) cout << "NO";
}
