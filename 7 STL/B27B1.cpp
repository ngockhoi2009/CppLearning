#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, q; cin >> n >> q; 
	vector<int>bd(n+1);
	vector<long long>prefix(1, 0);
	long long v = 1; int h = 1;
	for (int k = 0; k < n; k++) {
		int x; cin >> x; bd[h] = v;
		for (int i = 0; i < x; i++) {
			int temp; cin >> temp;
			prefix.push_back(temp + prefix[v-1]); v++;
		}
		h++;
	}
	bd[n+1] = v;
	for (int t = 0; t < q; t++) {
		int i, L, R; cin >> i >> L >> R;
		int s = bd[i] - 1;
		int hang = bd[i+1] - bd[i];
		if (L > hang) cout << 0 << '\n';
		else if (R > hang) cout << prefix[s+hang] - prefix[s+L-1] << '\n';
		else cout << prefix[R+s] - prefix[L+s-1] << '\n';
	}
	return 0;
}
