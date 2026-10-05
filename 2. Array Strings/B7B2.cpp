#include <bits/stdc++.h>
using namespace std;
const int M = 1001;


int main (){
	int n;
	cin >> n;
	int a[M][M];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	int i = 1, j = 1; long long sum = 0;
	while (i <= n && j <= n) {
		sum = sum + a[i][j];
		i++;
		j++;
	}
	int c = 1, d = n;
	while (c <= n && d >= 1) {
		sum = sum + a[c][d];
		c++;
		d--;
	}
	if (n%2 == 0) cout << sum;
	else if (n%2==1) {
		int mid = n/2 + 1;
		cout << sum - a[mid][mid];
	}
	return 0;
}
