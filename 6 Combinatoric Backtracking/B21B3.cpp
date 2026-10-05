#include <bits/stdc++.h>
using namespace std;
int a[100001];

bool isPrime[1000001];
void sangnguyento(int n) {
	for (int i = 2; i <= n; i++) isPrime[i] = true;
 	for (int i = 2; i <= n; i++) {
 		if (isPrime[i]) {
			for (int j = 2*i; j <= n; j+=i) isPrime[j] = false;
		}
	}
}

int prefix[100001];
void khoitao(int n) {
	prefix[0] = 0;
	for (int i = 1; i <= n; i++) {
		if (isPrime[a[i]]) prefix[i] = prefix[i - 1] + 1;
		else prefix[i] = prefix[i - 1];
	}
}

int BinarySearch(int k, int l, int n) {
	int i = l; int r = n; int res = -1;
	while(l <= r) {
		int mid = (l + r)/2;
		if (prefix[mid] - prefix[i - 1] >= k) {
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	if (r == n + 1) return -1;
	else return res;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; int q; cin >> n >> q;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sangnguyento(1000001);
	khoitao(n);
	while (q--) {
		int i, k; cin >> i >> k;
		cout << BinarySearch(k, i, n) << '\n';
	}
 	return 0;
}
