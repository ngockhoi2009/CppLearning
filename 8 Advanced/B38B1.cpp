#include <bits/stdc++.h>
using namespace std;

int chuoichung(string &s, string &t) {
	int count = 0;
	int i = s.length()-1;
	while (i >= 0 && s[i] == t[i]) {
		count ++; i--;
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s, t; cin >> s >> t;
	int n = s.length(), m = t.length();
	if (n > m) s.erase(0, n-m);
	else t.erase(0, m-n);
	int k = s.length();
	if (chuoichung(s, t) == 0) cout << n+m;
	else cout << abs(m-n) + 2*(k-chuoichung(s,t));
	return 0;
}
