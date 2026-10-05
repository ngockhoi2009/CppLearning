#include <bits/stdc++.h>
using namespace std;
const int M = 1001;
int a[M][M];

bool doihang(int a[][M], int i, int j, int m) {
	for (int k = 1; k <= m; k++) {
		if (a[i][k] < a[j][k]) return false;
		else if (a[i][k] > a[j][k]) return true;
	}
	return false;
}	

int main (){
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
		sort(a[i] + 1, a[i] + m + 1);
	}
	
	for (int i = 1; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if(doihang(a, i, j, m)) {
				for (int k = 1; k <= m; k++) {
					int temp = a[j][k];
					a[j][k] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
