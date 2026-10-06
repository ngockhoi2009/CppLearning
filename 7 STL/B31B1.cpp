#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long count = 0;
	long long n, s; cin >> n >> s; map<long long, int> tanso; tanso[0] = 1;
	long long prefix[n+1]; prefix[0] = 0;
	for (long long i = 1; i <= n; i++) {
		long long a; cin >> a;
		prefix[i] = prefix[i-1] + a;
		if (tanso.find(prefix[i] - s) != tanso.end()) count+=tanso[prefix[i]-s];
		if (tanso.find(prefix[i]) != tanso.end()) tanso[prefix[i]]++;
		else tanso[prefix[i]] = 1;
	}
	cout << count;
	return 0;
}
