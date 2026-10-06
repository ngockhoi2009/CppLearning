#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; map<int, int> hoa; cin >> n; int count = 0;
	if (n == 0) {
		cout << 0; return 0;
	}
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		hoa[a]++;
	}
	for (map<int, int>:: iterator it = hoa.begin(); it != hoa.end(); it++) {
		int a = it -> first; int b = it -> second;
		if (a > b) count+=b;
		if (a < b) count+=(b-a);
		if (a == b) continue;
	}
	cout << count;
    return 0;
}
