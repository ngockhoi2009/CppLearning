#include <bits/stdc++.h>
using namespace std;
#define int long long
const long long M = 1e18;

bool dongvang(int k, int n) {
	int A = 0, B = 0; 
	int vang = n;
	while (n > 0) {
		if (n >= k) {
			A+=k; n-=k;
		} 
		else {
			A+=n; n-=n;
		}
		int b = n/10;
		B+=b; n-=b;
	}
	if (B > vang/2) return false;
	if (A >= vang/2) return true;
}


signed main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	long long L = 1, R = n, mid, ans;
	while (R >= L) {
		mid = (R+L)/2;
		if (dongvang(mid, n)) {
			ans = mid;
			R = mid-1;
		}
		else L = mid+1;
	}
	cout << ans;
	return 0;
}
