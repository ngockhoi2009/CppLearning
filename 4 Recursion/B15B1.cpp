#include <bits/stdc++.h>
using namespace std;
const int M = 1e3;

int a[M+1][M+1];

long long sum1 = 0;
void tong1(int n, int i, int j, int x) {
	if (i > n) return;
	else {
		if (j > n) return tong1(n, i + 1, x + 1, x + 1);
		else {
			sum1 = sum1 + a[i][j];
			return tong1(n, i, j + 1, x);
		} 
	}
}

long long sum2 = 0;
void tong2(int n, int i, int j, int x) {
	if (i < 0) return;
	else {
		if (j < 0) return tong2(n, i - 1, x - 1, x - 1);
		else {
			sum2 = sum2 + a[i][j];
			return tong2(n, i, j - 1, x);
		} 
	}
}
 
int main (){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	tong1(n, 0, 1, 1);
	tong2(n, n - 1, n - 2, n - 2);
	cout << abs(sum1 - sum2);
	return 0;
}
