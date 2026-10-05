#include <bits/stdc++.h>
using namespace std;

void in(int c[], int b) {
	for (int i = 1; i <= b; i++) cout << c[i] << " ";
	cout << '\n';
}

void sinhtohop(int k, int n) {
	int c[k+1];
	for (int i = 1; i <= k; i++) c[i] = i;
	while (true) {
		in(c, k);
		int j = k;
		while (j > 0 && c[j] >= n - k + j) j--;
		if (j == 0) break;
		c[j] += 1;
		for (int t = j + 1; t <= k; t++) c[t] = c[t - 1] + 1;
	}
}


int main() {
	ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int n, k; cin >> n >> k;
	sinhtohop(k, n);
    return 0;
}
