#include <bits/stdc++.h>
using namespace std;

long long abca(string &s) {
	int n = s.length();
	long long cnt_a = 0, cnt_ab = 0, cnt_abc = 0, cnt_abca = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'a') {
			cnt_abca += cnt_abc;
			cnt_a++;
		}
		if (s[i] == 'b') cnt_ab += cnt_a;
		if (s[i] == 'c') cnt_abc += cnt_ab;
	}
	return cnt_abca;
}

		
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 	string s; cin >> s;
 	cout << abca(s);
  	return 0;
}
