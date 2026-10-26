#include<bits/stdc++.h>
	using namespace std;
	
	int main() {
		ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
		int n, k; cin >> n >> k; 
		unordered_set<int> s;
		vector<int> giasach;
		for (int i = 1; i <= n; i++) {
			int t; cin >> t;
			if (s.find(t) != s.end()) continue;
			if (giasach.size() == k) {
				s.erase(giasach[0]);
				giasach.erase(giasach.begin());
				giasach.push_back(i);
				s.insert(t);
				continue;
			}
			if (giasach.size() < k) {
				s.insert(t);
				giasach.push_back(i);
			}
		}
		for (int i = 0; i < giasach.size(); i++) cout << giasach[i] << " ";
		return 0;
	}
