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
long long tong(int x, int y, int z, int t) {
	return prefix[z][t] - prefix[x-1][t] - prefix[z][y-1] + prefix[x-1][y-1];
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
	int q;
	cin >> q;
	while (q--) {
    	int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << tong(x1, y1, x2, y2) << '\n';
	}
    return 0;
}
