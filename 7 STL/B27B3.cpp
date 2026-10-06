#include <bits/stdc++.h>
using namespace std;

void sapxep(vector<long long>&v) {
	int n = v.size(); 
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (v[j] < v[i]) {
				long long temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}

void dao(vector<long long>&v) {
	int l = 0; int r = v.size() - 1;
	while (l < r) {
		long long temp = v[r];
		v[r] = v[l];
		v[l] = temp;
		l++; r--;
	}
}


int main() {
	vector<long long>v; int q; cin >> q; 
	for (int i = 0; i < q; i++) {
		int x; cin >> x;
		if (x == 1) {
			long long a; cin >> a;
			v.push_back(a);
		}
		if (x == 2) {
			sapxep(v);
		}
		if (x == 3) { 
			sapxep(v);
			dao(v);
		}
		if (x == 4) {
			dao(v);
		}
		if (x == 5) {
			cout << v.size() << '\n';
		}
		if (x == 6) {
			int a; cin >> a;
			cout << v.at(a) << '\n';
		}
	}
	return 0;
}
