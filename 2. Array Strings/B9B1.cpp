#include<bits/stdc++.h>
using namespace std;

const int M = 1e3;
int a[M+1][M+1];
long long prefix[M+1][M+1];
void khoitao(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			prefix[i][j] = prefix[i][j-1] + prefix[i-1][j] - prefix[i-1][j-1] + a[i][j];
		}
	}
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i<= n; i++) {
		for (int j = 1; j<= m; j++) {
			cin >> a[i][j];
		}
	}
	khoitao(n, m);
	long long sum = prefix[n][m];
	long long res = sum;
	for (int i = 1; i<=n; i++) {
		long long sum1 = prefix[i][m];
		res = min(res, abs(sum1 - (sum - sum1)));
	}
	for (int j = 1; j<=m; j++) {
		long long sum1 = prefix[n][j];
		res = min(res, abs(sum1 - (sum - sum1)));
	}
	cout << res;
    return 0;
}
