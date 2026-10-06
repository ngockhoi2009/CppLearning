#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int q; cin >> q; stack<int>hop;
	for (int i = 0; i < q; i++) {
		int x; cin >> x;
		if (x == 1) {
			cout << hop.top() << '\n';
			hop.pop();
		}
		else {
			int a; cin >> a;
			hop.push(a);
		}
	}
    return 0;
}
