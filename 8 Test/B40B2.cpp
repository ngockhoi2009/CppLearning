#include<bits/stdc++.h>
using namespace std;


int tongchan(long long l, long long r, long long S) {
	long long kq = 0;
	while (l <= r) {
		long long mid = l + (r-l)/2;
		long long M = mid*(mid+1);
		if (M > S) r = mid-1;
		if (M < S) {
			kq = mid;
			l = mid+1;
		}
		if (M == S) return mid;
	}
	return kq;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long S; cin >> S;
	long long res = tongchan(0, 1000000000, S)*2+1;
	cout << res;
  	return 0;
}
