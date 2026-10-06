#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m; cin >> n >> m; 
	unordered_set<long long> s1, s2; vector<long long> s;
	for (int i = 0; i < n; i++) {
		long long temp; cin >> temp; s1.insert(temp);
	}
	for (int i = 0; i < m; i++) {
		long long temp; cin >> temp; s2.insert(temp);
	}
	for (unordered_set<long long>:: iterator it = s1.begin(); it != s1.end(); it++) {
		if (s2.find(*it) != s2.end()) s.push_back(*it);
	}
	sort (s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) cout << s[i] << " ";
	return 0;
}
