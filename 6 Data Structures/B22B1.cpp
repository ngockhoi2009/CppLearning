#include <bits/stdc++.h>
using namespace std;

void in(int c[], int k) {
	for(int i = 1; i <= k; i++) cout << c[i] << ' ';
	cout << '\n';
}
 
void sinhtohop(int c[], int n, int k, int i) {
	if (i > k) in(c, k);
	else {
		for (int t = c[i - 1] + 1; t <= n - k + i; t++) {
			c[i] = t;
			sinhtohop(c, n, k, i+1);
		} 
	}
}


 
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k; int c[n + 1]; c[0] = 0;
	sinhtohop(c, n, k , 1);
	return 0;
}
