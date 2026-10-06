#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int p, q; cin >> p >> q;
	set<int> s; 
	int t1, t2; cin >> t1 >> t2; s.insert(t1); s.insert(t2);
	int Min = abs(t2 - t1);
	for (int i = 0; i < p-2; i++) {
		int a; cin >> a;
		if (s.find(a) != s.end()) Min = 0;
		else {
			s.insert(a);
			if (a == *s.begin()) {
				set<int>:: iterator it = s.begin(); 
				int c = *it; 
				it++; int n = *it;
				Min = min(Min, n-c);
			}
			else if(a == *s.rbegin()) {
				set<int>:: iterator it = s.end(); 
				it--; int c = *it;
				it--; int n = *it;
				Min = min(Min, c-n);
			}
			else {
				set<int>:: iterator it = s.find(a); 
				int c = *it; 
				it--; int m = *it;
				it++; it++; int n = *it;
				Min = min(Min, min(c-m, n-c));
			}
		}
	}
	for (int i = 0; i < q; i++) {
		int t; cin >> t;
		if (t == 1) {
			int x; cin >> x;
			if (s.find(x) != s.end()) Min = 0;
			else {
				s.insert(x);
				if (x == *s.begin()) {
					set<int>:: iterator it = s.begin(); 
					int c = *it; 
					it++; int n = *it;
					Min = min(Min, n-c);
				}
				else if(x == *s.rbegin()) {
					set<int>:: iterator it = s.end(); 
					it--; int c = *it;
					it--; int n = *it;
					Min = min(Min, c-n);
				}
				else {
					set<int>:: iterator it = s.find(x); 
					int c = *it; 
					it--; int m = *it;
					it++; it++; int n = *it;
					Min = min(Min, min(c-m, n-c));
				}				
			}
		}
		else if (t == 2) cout << Min << '\n';
	}
	return 0;
}
