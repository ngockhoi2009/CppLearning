#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	unordered_set<long long> s;
	int n; cin >> n;
	while (n > 0) {
		long long x; cin >> x; 
		s.insert(x);
		n--;
	}
	vector<long long> v(s.begin(), s.end());
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	return 0;
}
