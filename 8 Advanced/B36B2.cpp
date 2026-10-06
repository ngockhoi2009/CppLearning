#include<bits/stdc++.h>
using namespace std;


int Unn[1000001];
void uocnn() {
	for (int i = 2; i <= 1000000; i++) Unn[i] = i;
	for (int i = 2; i*i <= 1000000; i++) {
		if (Unn[i] == i) {
			for (int j = i*i; j <= 1000000; j+=i) {
				if (Unn[j] == j) Unn[j] = i;
			}
		}
	}
}

void in(int n) {
	set<int> s;
	while (n > 1) {
		int u = Unn[n];
		s.insert(u);
		n = n/u;
	}
	for (set<int>:: iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << '\n';
}



int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	uocnn();
	while (cin >> n) {
		in(n);
	}
	return 0;
}
