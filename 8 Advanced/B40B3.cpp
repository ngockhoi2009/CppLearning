#include <bits/stdc++.h>
	using namespace std;
	const int M = 1e9;
	
	
	
	int main() {
	    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
		int n, k, q; cin >> n >> k >> q;
		vector<int> prefix; prefix.push_back(0);
		for (int i = 0; i < n; i++) {
			int temp; cin >> temp;
			if (temp == k) {
				int t = prefix[i] + 1;
				prefix.push_back(t);
			}
			else {
				int t = prefix[i];
				prefix.push_back(t);
			}
		}
		for (int i = 0; i < q; i++) {
			int l, r; cin >> l >> r;
			cout << prefix[r] - prefix[l-1] << '\n';
		}
	  	return 0;
	}
