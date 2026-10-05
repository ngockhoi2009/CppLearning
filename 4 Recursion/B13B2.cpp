#include <bits/stdc++.h>
using namespace std;

char a[101][101];
void tamgiac(int x, int n, int i) {
	if (i == n) return;
	for (int j = x; j < n; j++) {
		a[i][j] = '*';
	}

	tamgiac(x-1, n, i+1);
}


int main (){
	int n;
	cin >> n;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			a[i][j] = ' ';
		}
	}
	tamgiac(n-1, n, 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
