#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+1;

int a[11][11];
long long ocSen(int n, int m) {
	if (n == 0 && m == 0) return a[n][m];
	if (n == 0 && m > 0) return ocSen(n, m - 1) + a[n][m];
	if (n > 0 && m == 0) return ocSen(n - 1, m) + a[n][m];
	return max(ocSen(n - 1, m) + a[n][m], ocSen(n, m - 1) + a[n][m]);
}


int main() {
	ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cout << ocSen(n, m);
    return 0;
}
