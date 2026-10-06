#include <bits/stdc++.h>
using namespace std;
const int M = 1e9;



int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<long long> prefix; 
	prefix.push_back(0);
	for (int i = 0; i < n; i++) {
		long long temp; cin >> temp;
		long long kq = temp + prefix[i];
		prefix.push_back(kq);
	}
	long long P, Q, R; cin >> P >> Q >> R; bool check = false;
	set<long long> s(prefix.begin(), prefix.end());
	for (int i = 1; i <= n; i++) {
		long long x = prefix[i];
		if (s.find(x+P) != s.end() && s.find(x+P+Q) != s.end() && s.find(x+P+Q+R) != s.end()) {
			cout << "YES";
			check = true;
		}
	}
	if (!check) cout << "NO";
  	return 0;
}
