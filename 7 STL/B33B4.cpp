#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, q; cin >> n >> q; 
	set<int> rap; 
	for (int i = 0; i < q; i++) {
		int a; cin >> a;
		if (a == 1) {
			int seat;
			if (rap.empty()) {
				cout << 1 << '\n';
				rap.insert(1);
			}
			else if (rap.size() == 1) {
				int b = *rap.begin();
				if ((n-b) > (b-1)) seat = n;
				else seat = 1;
				rap.insert(seat);
				cout << seat << '\n';
			}
			else if (rap.size() > 1) {
				int t = *rap.begin();
				int seat = t - 1;
				int yeah = 1;
				for (set<int>:: iterator it = rap.begin(); it != rap.end(); it++) {
					int tb = (*it - t)/2;
					if (tb > seat) {
						seat = tb;
						yeah = (*it + t)/2;
					}
					t = *it;
				}
				if (n-t > seat) {
					seat = n - t;
					yeah = n;
				}
				rap.insert(yeah);
				cout << yeah << '\n';
			}
		}
		if (a == 2) {
			int k; cin >> k;
			rap.erase(k);
		}
	}
	return 0;
}
