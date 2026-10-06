#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n; map<int, int> dayso;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (dayso.find(a) == dayso.end()) dayso[a] = 1;
		else {
			int x = dayso[a]+1;
			dayso[a] = x;
		}
	}
	for (map<int, int>::iterator it = dayso.begin(); it != dayso.end(); it++) {
		cout << it->first << " " << it->second << '\n';
	}
    return 0;
}
