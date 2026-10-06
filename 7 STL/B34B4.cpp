#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int q; cin >> q;
	multiset<long long> s;
	for (int i = 0; i < q; i++) {
		int a; cin >> a; long long x; cin >> x;
		if (a == 1) s.insert(x);
		else {
			long long m = *s.begin(), n = *s.rbegin();
			if (x > n) {
				multiset<long long>:: iterator it = s.begin();
				s.erase(it);
			}
			else if (x < m) {
				multiset<long long>:: iterator it = s.end();
				it--;
				s.erase(it);
			}
			else {
				if (n - x >= x - m) {
					multiset<long long>:: iterator it = s.end();
					it--;
					s.erase(it);
				}
				else {
					multiset<long long>:: iterator it = s.begin();
					s.erase(it);				
				}
			}
			
		}
	}
	for (multiset<long long>:: iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
 	return 0;
}
