#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int q; cin >> q;
	set<int> s;
	for (int i = 0; i < q; i++) {
		int a; cin >> a; int x; cin >> x;
		if (a == 1) s.insert(x);
		if (a == 2) s.erase(x);
		if (a == 3) {
			if (s.empty()) cout << -1 << '\n';
			else {
				if (x >= *s.rbegin()) cout << -1 << '\n';
				else {
					s.insert(x);
					set<int>:: iterator it = s.find(x);
					it++;
					cout << *it << '\n';
					s.erase(x);
				}
			}
 		}
	}
	return 0;
}
