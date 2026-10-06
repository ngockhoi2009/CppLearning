#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n; unordered_map<string, string> lop;
	for (int i = 0; i < n; i++) {
		string t; string l; cin >> t >> l;
		lop[t] = l;
	}
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		string t; cin >> t;
		if (lop.find(t) == lop.end()) cout << -1 << '\n';
		else cout << lop[t] << '\n';
	}
}
