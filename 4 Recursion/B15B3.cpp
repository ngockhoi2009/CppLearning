#include <bits/stdc++.h>
using namespace std;
const int M = 1e5;

long long a[M + 1];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long n, k, tong = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int i = n; i >= n-k+1; i--) tong = tong + a[i];
	cout << tong;
    return 0;
}
