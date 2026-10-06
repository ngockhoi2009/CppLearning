#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long n, k; cin >> n >> k; map<long long, int> dayso; long long count = 0;
	long long prefix = 0; dayso[0] = 1;
	for (int i = 0; i < n; i++) {
		long long a; cin >> a;
		prefix = prefix + a;
		long long p = prefix - k*(i+1);
		if (dayso.find(p) != dayso.end()) {
			count+=dayso[p];
		}
		dayso[p]++;
	}
	cout << count;
	return 0;
}
