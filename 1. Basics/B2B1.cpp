#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	cin >> n >> m;
	int gt = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << gt << " ";
			gt++;
		}
		cout << endl;
	}
	return 0;
}
