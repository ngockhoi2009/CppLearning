#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k; int a[n+1];
	for (int i = 0; i < n; i++) cin >> a[i];
	multiset <int> s; 
	for (int i = 0; i < k; i++) {
		s.insert(a[i]);
	}
	cout << *s.begin() << " ";
	for (int i = k; i < n; i++) {
		s.insert(a[i]);
		s.erase(s.find(a[i-k]));
		cout << *s.begin() << " ";
	}
	return 0;
}
