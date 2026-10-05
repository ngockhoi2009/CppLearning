#include <bits/stdc++.h>
using namespace std;
const int M = 31;
long long a[M], b[M];

long long keomax = 0;
long long xinkeo(int i) {
	if(i <= 0) return 0;
	if(i == 1) return a[1];
	return max(xinkeo(i-1), xinkeo(i-2) + a[i]);
}


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << xinkeo(n);
    return 0;
}
