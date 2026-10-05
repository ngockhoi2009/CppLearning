#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+1;

long long dp[1000][1000];
int a[1000][1000];
long long ocSen(int n, int m) {
	if (dp[n][m] != 0) return dp[n][m];
	if (n == 0 && m == 0) return dp[n][m] = a[n][m];
	if (n == 0 && m > 0) return dp[n][m] = ocSen(n, m - 1) + a[n][m];
	if (n > 0 && m == 0) return dp[n][m] = ocSen(n - 1, m) + a[n][m];
	dp[n][m] = max(ocSen(n - 1, m) + a[n][m], ocSen(n, m - 1) + a[n][m]);
	return dp[n][m];
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
	cout << ocSen(n-1, m-1);
    return 0;
}
