#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, a, b;
	cin >> x >> y >> a >> b;
	long long nho = max (x, a);
	long long lon = min (y, b);
	if (lon < nho) {
		cout << -1;
	}
	else {
		cout << nho << " " << lon;
	}
	return 0;
}
