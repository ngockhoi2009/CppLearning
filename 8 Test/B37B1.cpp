#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s, x, y, res; cin >> s >> x >> y;
	for (int i = 0; i < s.length(); i++) {
		bool check = true;
		if (s[i] == x[0]) {
			for (int j = 0; j < x.length(); j++) {
				if (i+j >= s.length() || s[i+j] != x[j]) check = false;
			}
			if (check) {
				res+= y;
				i+=x.length()-1;
			}
			else {
				res+=s[i];
			}
		}
		else res+=s[i];
	}
	cout << res;
	return 0;
}
