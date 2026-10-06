#include <bits/stdc++.h>
using namespace std;


void wifi_lap(long long h[], long long p[], int n) {
	vector<int> ptnntt(n+1, -1), ans; ans.push_back(n);
	for (int i = n-1; i > 0; i--) {
		if (h[i] > h[i+1]) ptnntt[i] = i+1;
		else {
			int x = i+1;
			while (h[x] >= h[i] && x != -1) {
				x = ptnntt[x];
			}
			ptnntt[i] = x;
		}
		if (ptnntt[i] == -1 || p[i] > p[ptnntt[i]]) ans.push_back(i);
	}
	cout << ans.size() << '\n';
	for (int i = ans.size()-1; i >= 0; i--) cout << ans[i] << " ";
}




int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n; long long h[n+1]; long long p[n+1];
	for (int i = 1; i <= n; i++) cin >> h[i];
	for (int i = 1; i <= n; i++) cin >> p[i];
	wifi_lap(h, p, n);
	return 0;
}
