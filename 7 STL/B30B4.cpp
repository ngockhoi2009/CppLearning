#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int q; cin >> q; queue<string>hang;
	for (int i = 0; i < q; i++) {
		int x; cin >> x;
		if (x == 1) {
			string s; cin >> s;
			hang.push(s);
		}
		else {
			if (hang.empty()) cout << "Empty" << '\n';
			else {
				cout << hang.front() << '\n';
				hang.pop();
			}
		}
	}
	return 0;
}
